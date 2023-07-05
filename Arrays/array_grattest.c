/*To Dtermine the gratter number in the array*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], i, max;

    for (i = 0; i < 10; i++)
    {
        printf("Enter %d position number: ", i + 1);
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    printf("The gratest number in array is: %d", max);
}
