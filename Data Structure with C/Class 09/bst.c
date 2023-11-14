#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
} node;

int main()
{
    node *root = (node *)malloc(sizeof(node));
    node *a = (node *)malloc(sizeof(node));
    node *b = (node *)malloc(sizeof(node));
    node *c = (node *)malloc(sizeof(node));
    node *d = (node *)malloc(sizeof(node));
    node *e = (node *)malloc(sizeof(node));

    // value
    root->val = 20;
    a->val = 10;
    b->val = 30;
    c->val = 15;
    d->val = 25;
    e->val = 35;

    // connection
    root->left = a;
    root->right = b;
    a->left = NULL;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = NULL;
    c->right = NULL;
    d->left = NULL;
    d->right = NULL;
    e->left = NULL;
    e->right = NULL;

    return 0;
}