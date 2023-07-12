/*
It is the stractured collection of data
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    char name[20];
    int age;
    float marks;
};

void main()
{
    struct student s1, s2, s3;

    strcpy(s1.name, "prince");
    s1.age = 21;
    s1.marks = 54;

    printf("Enter a name: ");
    scanf("%s",s2.name);
    printf("Enter age: ");
    scanf("%d", &s2.age);
    printf("Enter marks: ");
    scanf("%f", &s2.marks);

    printf("Enter a name: ");
    scanf("%s",s3.name);
    printf("Enter age: ");
    scanf("%d", &s3.age);
    printf("Enter marks: ");
    scanf("%f", &s3.marks);

    printf("Display the information of student 1");

    printf("\n name: %s", s1.name);
    printf("\n age: %d", s1.age);
    printf("\n marks: %f", s1.marks);

    printf("\nDisplay the information of student 2");

    printf("\n name: %s", s2.name);
    printf("\n age: %d", s2.age);
    printf("\n marks: %f", s2.marks);

    printf("\nDisplay the information of student 3");

    printf("\n name: %s", s3.name);
    printf("\n age: %d", s2.age);
    printf("\n marks: %f", s3.marks);
}
