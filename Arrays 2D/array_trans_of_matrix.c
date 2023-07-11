/*
Change matrix into Transpose of Matrix
i,e,
|8  5  4|       |8  9|
|9  2  3|       |5  2|
                |4  3|
                
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], b[3][3], i, j, count = 3;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("Enter a[%d%d] position of number: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Processing...\n");

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    printf("Your Transpose is here: \n");

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("%d\t", b[i][j]);
        }

        printf("\n");
    }
}