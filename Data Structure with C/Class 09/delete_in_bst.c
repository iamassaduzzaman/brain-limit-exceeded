#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} node;

// function to find minimum in a tree.
node *find_min(node *root)
{
    while (root->left != NULL)
        root = root->left;
    return root;
}

// function to search a delete a value from tree.
node *delete_in_bst(node *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = delete_in_bst(root->left, data);
    else if (data > root->data)
        root->right = delete_in_bst(root->right, data);
    else // found the desired value
    {
        
        if (root->left == NULL && root->right == NULL) // case 1:  No child
        {
            free(root);
            root = NULL;
        }
        else if (root->left == NULL) // case 2: One child
        {
            node *temp = root;
            root = root->right;
            free(temp);
        }
        else if (root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            free(temp);
        }
        else // case 3: 2 children
        {
            node *temp = find_min(root->right);
            root->data = temp->data;
            root->right = delete_in_bst(root->right, temp->data);
        }
    }
    return root;
}


// print in order
void inorder_print(node *root)
{
    if (root == NULL)
        return;

    inorder_print(root->left);
    printf("%d ", root->data);
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
    root->data = 20;
    a->data = 10;
    b->data = 30;
    c->data = 15;
    d->data = 25;
    e->data = 35;

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

    root = delete_in_bst(root, 30);
    inorder_print(root);

    return 0;
}
