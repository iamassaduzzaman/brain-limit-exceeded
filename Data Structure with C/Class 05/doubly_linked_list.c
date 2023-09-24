#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
    struct Node *prev;
} node;

int main()
{
    node *a = (node *)malloc(sizeof(node)); // head
    node *b = (node *)malloc(sizeof(node));
    node *c = (node *)malloc(sizeof(node));
    node *d = (node *)malloc(sizeof(node)); // tail

    a->val = 10;
    b->val = 20;
    c->val = 30;
    d->val = 40;

    // connection
    a->prev = NULL;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    d->next = NULL;

    // print head to tail
    printf("print head to tail: ");
    node *temp = a;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }

    //  print tail to head
    printf("\n\nprint reverse: ");
    node *temp1 = d;
    while (temp1 != NULL)
    {
        printf("%d ", temp1->val);
        temp1 = temp1->prev;
    }
    return 0;
}