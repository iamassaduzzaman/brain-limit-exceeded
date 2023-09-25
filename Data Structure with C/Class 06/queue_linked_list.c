#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int val;
  struct Node *next;
  struct Node *prev;
} node;

node *front = NULL;
node *rear = NULL;

void enqueue(int data)
{
  // creating new node
  node *newNode = (node *)malloc(sizeof(node));
  newNode->val = data;
  newNode->next = NULL;
  newNode->prev = NULL;

  // rear and front dujonei jodi null thake
  if (front == NULL)
  {
    front = newNode;
    rear = newNode;
    return;
  }

  // connection
  rear->next = newNode;
  newNode->prev = rear;
  rear = newNode;
}

void dequeue()
{
  node *deleteNode = front;
  front = front->next;
  free(deleteNode);
  front->prev = NULL;
}

void front_val()
{
  printf("%d\n", front->val);
}

void diplay()
{
  node *temp = front;
  while (temp != NULL)
  {
    printf("%d ", temp->val);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);
  // diplay();
  // front_val();
  dequeue();
  front_val();
}