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

// delete from postion
void delete_from_position(int p)
{
    node *temp = head;
    for (int i = 1; i <= p - 1; i++)
    {
        temp = temp->next;
    }
    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    free(deleteNode);
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

    int p;
    printf("Delete Position: ");
    scanf("%d", &p);
    delete_from_position(p);

    print_normal(head);
    print_reverse(tail);
}
