/*
Call by value means as we calling the function and
 using it value
*/

#include <stdio.h>
#include <conio.h>

void swap(int, int);

void main()
{
    int a, b;

    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    swap(a, b);
}

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping %d %d", a, b);
}