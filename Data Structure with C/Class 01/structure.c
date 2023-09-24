#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int id;
    char section;
};

int main()
{
    struct student s1, s2, s3; // declaring student 

    // student 01
    s1.id = 1255;
    s1.section = 'B';
    strcpy(s1.name, "Hasib");

    // student 02
    s2.id = 1256;
    s2.section = 'B';
    strcpy(s2.name, "Sojib Mishkat");

    // student 03
    s3.id = 1257;
    s3.section = 'B';
    strcpy(s3.name, "Abrar Hasnat");

    // student 01 output
    printf("ID = %d\n", s1.id);
    printf("Name = %s\n", s1.name);
    printf("Section = %c\n\n", s1.section);

    // student 02 output
    printf("ID = %d\n", s2.id);
    printf("Name = %s\n", s2.name);
    printf("Section = %c\n\n", s2.section);

    // student 03 output
    printf("ID = %d\n", s3.id);
    printf("Name = %s\n", s3.name);
    printf("Section = %c\n", s3.section);

    return 0;
}