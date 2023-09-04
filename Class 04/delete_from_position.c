#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

// declaring head
node *head;

// delete from position
void delete_from_positon(int p)
{
    node *temp = head;
    for (int i = 1; i <= p - 1; i++)
    {
        temp = temp->next;
        // error handling
        if (temp == NULL)
        {
            printf("Invalid Position\n");
            return;
        }
    }
    // eror handling
    if (temp->next == NULL)
    {
        printf("Invalid Position\n");
        return;
    }
    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);
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

    // delete from position
    int p;
    printf("Position: ");
    scanf("%d", &p);
    delete_from_positon(p);

    // printing function
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}
