#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

node *head;


// insert at head
void insert_at_head(int v)
{
    // creating new node

    node *newNode = malloc(sizeof(node));
    newNode->val = v;

    // connection
    newNode->next = head;
    head = newNode;


}



int main()
{
    head = malloc(sizeof(node));
    node *node1 = malloc(sizeof(node));
    node *node2 = malloc(sizeof(node));
    node *tail = malloc(sizeof(node));

    head->val = 10;
    node1->val = 20;
    node2->val = 30;
    tail->val = 40;

    // connection
    head->next = node1;
    node1->next = node2;
    node2->next = tail;
    tail->next = NULL;




    // insert at head
    int v;
    printf("New head value: ");
    scanf("%d", &v);
    insert_at_head(v);


    // printing function
    node *temp = head;
    while(temp!= NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}

