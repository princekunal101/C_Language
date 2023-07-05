/*Simple Table writing with any number */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, t;

    printf("Enter a number for table: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        t = n * i;

        printf("\ntable: %d", t);
        t = 0;
    }
}