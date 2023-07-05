/*Writting a table with stander style*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, t;

    printf("Enter a number for writting table: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        t = n * i;

        printf("\n%d * %d = %d", n, i, t);

        t = 0;
    }
}