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

    // connection
    (*a).val = 10;
    (*b).val = 20;
    // a->val = 10;
    // b->val = 20;

    (*a).next = b;
    (*b).next = NULL;
    // a->next = b;
    // b->next = NULL;

    // using dereferencing
    printf("%d\n", (*a).val);
    printf("%d\n", (*b).val);
    printf("%d\n", (*(*a).next).val);

    // using arrow sign
    printf("%d\n", a->val);
    printf("%d\n", b->val);
    printf("%d\n", a->next->val);
    return 0;
}