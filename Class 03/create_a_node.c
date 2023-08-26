#include <stdio.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

int main()
{
    node a, b;
    a.val = 10;
    b.val = 20;

    a.next = &b;
    b.next = NULL;

    printf("%d\n", a.val);
    // printf("%d\n", b.val);
    // printf("%d\n", (*a.next).val);
    printf("%d\n", a.next->val);
    return 0;
}