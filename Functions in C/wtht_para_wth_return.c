/*
Function having Return type But not having Parameter
*/

#include <stdio.h>
#include <conio.h>

int sum();

void main()
{
    int i;

    i = sum();

    printf("Sum of two number is %d", i);
}

int sum()
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    c = a + b;

    return c;
}