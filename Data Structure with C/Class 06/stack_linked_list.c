#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
    struct Node *prev;
} node;

// prothome duita node ei null
node *bottom = NULL;
node *top = NULL;;


void push(int data)
{
    // creating new node
    node *newNode = (node *)malloc(sizeof(node));
    newNode->val = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    // top and bottom dujonei jodi null thake
    if (bottom == NULL)
    {
        bottom = newNode;
        top = newNode;
        return;
    }

    // connection
    top->next = newNode;
    newNode->prev = top;
    top = newNode;
}

void pop()
{
    node *deleteNode = top;
    top = top->prev;
    free(deleteNode);
    top->next = NULL;
}

void top_val()
{
    printf("%d\n", top->val);
}

void diplay()
{
    node *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->prev;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    top_val();
    pop();
    top_val();

    diplay();
}