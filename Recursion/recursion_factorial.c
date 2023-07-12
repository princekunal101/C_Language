/*
Factorisl with Recursion
*/

#include <stdio.h>
#include <conio.h>

int factorial(int n);
int f = 1;

void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);
    printf("Factorial is %d", result);
}

int factorial(int n)
{
    if (n > 0)
    {
        f = f * n;
        n--;
        factorial(n);
    }

    return f;
}