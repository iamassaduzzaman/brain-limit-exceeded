#include <stdio.h>
#define mx 10

int stack[mx];
int top = -1;

void push(int v)
{
    if (top == mx - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = v;
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    top--;
}

void top_val()
{
    printf("%d\n", stack[top]);
}

void display()
{
    if (top != -1)
    {
        printf("Stack: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n\n");
    }
    else
    {
        printf("Stack is empty\n");
    }
}

int main()
{
    push(10);
    push(20);

    push(30);
    push(40);
    display();
    pop();
    display();
    top_val();
    

    return 0;
}
