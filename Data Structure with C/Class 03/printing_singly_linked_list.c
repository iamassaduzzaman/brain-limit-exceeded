#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

int main()
{
    node *a = (node *)malloc(sizeof(node));
    node *b = (node *)malloc(sizeof(node));
    node *c = (node *)malloc(sizeof(node));
    node *d = (node *)malloc(sizeof(node));

    a->val = 10;
    b->val = 20;
    c->val = 30;
    d->val = 40;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    // printf("%d\n", a->val);
    // printf("%d\n", a->next->val);
    // printf("%d\n", a->next->next->val);
    // printf("%d\n", a->next->next->next->val);

    // not a good approach
    // while(a != NULL)
    // {
    //     printf("%d\n", a->val);
    //     a = a->next;
    // }

    node *temp = a;
    while(temp != NULL)
    {
        printf("%d\n", temp->val);
        temp = temp->next;
    }

    // temp = a;
    // while(temp != NULL)
    // {
    //     printf("%d\n", temp->val);
    //     temp = temp->next;
    // }


    return 0;
}