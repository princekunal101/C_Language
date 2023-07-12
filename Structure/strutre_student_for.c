/*
Get multiple data from usersin structure
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct students
{
    char name[20];
    int age;
    float marks;
};

void main()
{
    struct students s1[10];
    int i;
    int count = 2;

    for (i = 0; i < count; i++)
    {
        printf("Enter name: ");
        scanf("%s", s1[i].name);

        printf("Enter age: ");
        scanf("%d", &s1[i].age);

        printf("Enter marks: ");
        scanf("%f", &s1[i].marks);
    }

    printf("Display the student data");

    for (i = 0; i < count; i++)
    {
        printf("\nname: %s", s1[i].name);
        printf("\nage: %d", s1[i].age);
        printf("\nmarks: %f", s1[i].marks);
    }
}
