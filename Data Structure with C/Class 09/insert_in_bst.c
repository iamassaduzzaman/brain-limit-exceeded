#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
} node;

// insert in bst
void insert_in_bst(node *root, int x)
{
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            node *newNode = (node *)malloc(sizeof(node));
            newNode->val = x;
            newNode->left = NULL;
            newNode->right = NULL;
            root->left = newNode;
        }
        else
        {
            insert_in_bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            node *newNode = (node *)malloc(sizeof(node));
            newNode->val = x;
            newNode->left = NULL;
            newNode->right = NULL;
            root->right = newNode;
        }
        else
        {
            insert_in_bst(root->right, x);
        }
    }
}

// print in order
void inorder_print(node *root)
{
    if (root == NULL)
        return;

    inorder_print(root->left);
    printf("%d ", root->val);
    inorder_print(root->right);
}

int main()
{

    /*
            20
          /   \
        10     30
         \    / \
         15  25 35
*/
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

    inorder_print(root); // before inserting the value
    printf("\n");
    insert_in_bst(root, 13);
    inorder_print(root); // after inserting the value

    return 0;
}

/*
            20
          /   \
        10     30
         \    / \
         15  25 35
*/