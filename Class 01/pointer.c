#include <stdio.h>

int main()
{
    int x = 5;
    int* ptr = &x;

    printf("value of x = %d\n", x); // give the value of x 
    printf("address of x = %d\n", &x); // give the address of x (in decimal form) 
    printf("\n\n");
 
    printf("value of ptr = %d\n", ptr); // give the value of ptr
    printf("address of ptr = %d\n", &ptr); // give the value of ptr

    // dereference
    printf("value of *ptr = %d\n", *ptr);
    
    
    // to see hexadecimal value of address
    printf("address of x = %p\n", &x); // give the address of x (in hexadecimal form)
    return 0;
}