#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dynamic variable
    // int *a =(int*)malloc(sizeof(int));
    // *a = 20;
    // printf("%d", *a);

    // dynamic array
    int *a = (int*)malloc(3 * sizeof(int));
    // int *a = (int*)calloc(3 , sizeof(int));
    
    printf("Array input: ");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nBefore deleteing: ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }

    free(a); // deleteing the array from heap memory
    
    printf("\n\nAfter deleteing: ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}