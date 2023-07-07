/*Selecting sorting means select the array and sawap the value each other */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], i, j, temp, small;

    for (i = 0; i < 10; i++)
    {
        printf("Enter %d position number: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10 - 1; i++)
    {
        small = i;

        for (j = i + 1; j < 10; j++)
        {
            if (a[small] > a[j])
            {
                small = j;
            }
        }

        if (small != i)
        {
            temp = a[i];
            a[i] = a[small];
            a[small] = temp;
        }
    }

    printf("Shorting Array is: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n%d", a[i]);
    }
}