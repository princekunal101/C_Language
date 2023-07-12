/*
Fabonacci series with recursion
*/

#include <stdio.h>
#include <conio.h>

void fab(int n)
{
    static int n1 = 0, n2 = 1, n3;

    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("\n %d", n3);

        fab(n - 1);
    }
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fabnacci series");
    printf("\n %d \n %d", 0, 1);

    fab(n - 2);
}