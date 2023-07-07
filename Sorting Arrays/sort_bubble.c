/*Bubble sorting is swap value one-by-one
 */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], i, j, temp;

    for (i = 0; i < 10; i++)
    {
        printf("Enter %d position number: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorting array is: ");

    for (i = 0; i < 10; i++)
    {
        printf("\n%d", a[i]);
    }
}