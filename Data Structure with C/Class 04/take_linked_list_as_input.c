#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

node *head;

// printing linked list
void print_linked_list()
{
    node *temp = head;
    while(temp!= NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}

// insert at tail
void insert_at_tail(int v)
{
    node *newNode = malloc(sizeof(node));
    newNode->val = v;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}



int main()
{
    head = malloc(sizeof(node));
    head = NULL;

    while(1)
    {
        int val;
        scanf("%d", &val);
        if(val == -1)
        {
            break;
        }
        insert_at_tail(val);
    }

    printf("my linked list: ");
    print_linked_list();
}
