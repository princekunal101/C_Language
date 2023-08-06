/*
union of students
*/
#include <conio.h>
#include <stdio.h>

union student
{
    char name[20];
    int age;
    float marks;
};

void main()
{
    union student s1, s2;

    // for first student
    printf("Enter name: ");
    // scanf("%s", s1.name);
    gets(s1.name);
    printf("Name is: %s", s1.name);

    printf("\nEnter age: ");
    scanf("%d", &s1.age);
    printf("Age is: %d", s1.age);

    printf("\nEnter marks: ");
    scanf("%f", &s1.marks);
    printf("Marks is: %f", s1.marks);

    // for second student
    printf("\nEnter name: ");
    // gets(s2.name);
    scanf("%s", s2.name);
    printf("Name is: %s", s2.name);

    printf("\nEnter age: ");
    scanf("%d", &s2.age);
    printf("Age is: %d", s2.age);

    printf("\nEnter marks: ");
    scanf("%f", &s2.marks);
    printf("Marks is: %f", s2.marks);
}
