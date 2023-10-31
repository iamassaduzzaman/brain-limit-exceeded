#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
} node;

void pre_order(node *parent)
{
  if(parent == NULL)
  {
    return;
  }
  printf("%d ", parent->val);
  pre_order(parent->left);
  pre_order(parent->right);

}

int main()
{
    node *root = (node *)malloc(sizeof(node));
    node *a = (node *)malloc(sizeof(node));
    node *b = (node *)malloc(sizeof(node));
    node *c = (node *)malloc(sizeof(node));
    node *d = (node *)malloc(sizeof(node));
    node *e = (node *)malloc(sizeof(node));
    node *f = (node *)malloc(sizeof(node));
    node *g = (node *)malloc(sizeof(node));
    node *h = (node *)malloc(sizeof(node));
    node *i = (node *)malloc(sizeof(node));

    // value assign
    root->val = 10;
    a->val = 20;
    b->val = 30;
    c->val = 40;
    d->val = 50;
    e->val = 60;
    f->val = 70;
    g->val = 80;
    h->val = 90;
    i->val = 100;

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->left = NULL;
    b->right = d;
    c->left = NULL;
    c->right = e;
    d->left = f;
    d->right = g;
    e->left = NULL;
    e->right = NULL;
    f->left = NULL;
    f->right = NULL;
    g->left = NULL;
    g->right = NULL;
    h->left = NULL;
    h->right = i;
    i->left = NULL;
    i->right = NULL;

    pre_order(root);
    return 0;
}