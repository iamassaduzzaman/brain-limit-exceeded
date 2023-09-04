#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

node *head;


// insert at head
void insert_at_position(int p, int v)
{
    // creating new node
    node *newNode = malloc(sizeof(node));
    newNode->val = v;

    // connection
    node *temp = head;
    for(int i = 1; i <= p -1; i++)
    {
        temp = temp->next;

        // error handling
        if(temp == NULL)
        {
            printf("Invalid Position\n");
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
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


    // insert at position
    int p, v;
    printf("Position: ");
    scanf("%d", &p);
    printf("Value: ");
    scanf("%d", &v);
    insert_at_position(p, v);


    // printing function
    node *temp = head;
    while(temp!= NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}


