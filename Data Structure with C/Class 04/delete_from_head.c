#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

// declaring head
node *head;


// delete from head
void delete_from_head(int p)
{
  // error handling
  if(head == NULL)
  {
    printf("Head is not available\n");
    return;
  }
  node *deleteHead = head;
  head = head->next;
  free(deleteHead);
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


    // delete from head
    int p;
    printf("Position: ");
    scanf("%d", &p);
    delete_from_head(p);


    // printing function
    node *temp = head;
    while(temp!= NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}




