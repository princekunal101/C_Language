/*
factorial with parameter and with return function
*/

#include <stdio.h>
#include <conio.h>

int factorial(int);

void main()
{
    int n, fact;

    printf("Enter a number for factorial: ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("Factorial of %d is %d", n, fact);
}

int factorial(int a)
{
    int fact = 1, i;

    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }

    return fact;
}