/*
Having return type and having parameter
*/

#include <stdio.h>
#include <conio.h>

int sum(int, int);
void main()
{
    int a, b, i;

    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    // calling the function
    i = sum(a, b);
    printf("Sum of two number is %d", i);
}

int sum(int a, int b)
{
    int z;

    z = a + b;
    return z;
}