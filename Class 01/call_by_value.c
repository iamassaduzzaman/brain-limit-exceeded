#include <stdio.h>

void hello(int x)
{
     x = 200; 
     printf("HELLO FUNCTION\n");
     printf("address of x = %d\n", &x);
     printf("value of x = %d\n", x);
}
int main()
{
    int x = 10;
    
    hello(x); // calling by the value of x
    printf("\n\n");
    
    printf("MAIN FUNCTION\n");
    printf("address of x = %d\n", &x);
    printf("value of x = %d\n", x);
    
    return 0;
}