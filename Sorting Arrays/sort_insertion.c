/*Insertion short is select the number and place the number
at apropriate placese
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], i, j, temp;

    for (i = 0; i < 10; i++)
    {
        printf("Enter %d position: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        temp = a[i];

        for (j = i; j >= 0; j--)
        {
            if (temp < a[j])
            {
                a[j + 1] = a[j];
                a[j] = temp;
                temp = a[i];
            }
        }
    }

    printf("Shorted array is: ");

    for (i = 0; i < 10; i++)
    {
        printf("\n%d", a[i]);
    }
}