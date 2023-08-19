#include <stdio.h>

void hello(int* p)
{
     *p = 200; 
     printf("HELLO FUNCTION\n");
     printf("value of *p = %d\n", *p);
}
int main()
{
    int x = 10;
    
    hello(&x); // calling by the address of x
    printf("\n\n");
    
    printf("MAIN FUNCTION\n");
    printf("value of x = %d\n", x);
    
    return 0;
}