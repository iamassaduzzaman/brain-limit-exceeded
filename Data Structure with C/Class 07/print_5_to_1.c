#include <stdio.h>

void num(int n)
{
    if(n == 0) return; // base case

    printf("%d\n", n);
    num(n-1);
}

int main()
{
    num(5);
    return 0;
}