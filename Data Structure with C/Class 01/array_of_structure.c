#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[50];
    int age;
    int salary;
} person;


int main()
{
    person p[3];

    for(int i = 1; i < 3; i++)
    {
      printf("Person: %d\n", i);
      printf("Name: ");
      scanf("%s", &p[i].name);
      printf("Age: ");
      scanf("%d", &p[i].age);
      printf("Salary: ");
      scanf("%d", &p[i].salary);
      printf("\n\n");
    }

    printf("--------- OUTPUT -----------\n");
    for(int i = 1; i < 3; i++)
    {
        printf("Person: %d\n", i);
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Salary: %d\n\n", p[i].salary);
    }
    return 0;
}