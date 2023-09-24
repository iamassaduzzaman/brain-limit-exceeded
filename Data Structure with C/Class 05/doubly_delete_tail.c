#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *prev;
    struct Node *next;
} node;

node *head, *tail;

// print normal
void print_normal(node *head)
{
    printf("print normal: ");
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}

// print reverse
void print_reverse(node *tail)
{
    printf("\n\nprint reverse: ");
    node *temp1 = tail;
    while (temp1 != NULL)
    {
        printf("%d ", temp1->val);
        temp1 = temp1->prev;
    }
}

// delete tail
void delete_tail()
{
    node *deleteNode = tail;
    tail = tail->prev;
    free(deleteNode);
    tail->next = NULL;
}



int main()
{
    head = malloc(sizeof(node));
    node *node1 = malloc(sizeof(node));
    node *node2 = malloc(sizeof(node));
    tail = malloc(sizeof(node));

    head->val = 10;
    node1->val = 20;
    node2->val = 30;
    tail->val = 40;

    // connection
    head->prev = NULL;
    head->next = node1;
    node1->prev = head;
    node1->next = node2;
    node2->prev = node1;
    node2->next = tail;
    tail->prev = node2;
    tail->next = NULL;

    delete_tail();

    print_normal(head);
    print_reverse(tail);
}
