#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int id;
    char section;
} std;

int main()
{
    typedef long long int lli;
    lli  f = 3;
    printf("size of f = %d\n\n", sizeof(f));



    std s1;
    // student 01
    s1.id = 1255;
    s1.section = 'B';
    strcpy(s1.name, "Hasib");

    // student 01 output
    printf("ID = %d\n", s1.id);
    printf("Name = %s\n", s1.name);
    printf("Section = %c\n\n", s1.section);
    return 0;
}