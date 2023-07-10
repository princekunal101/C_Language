/*
Sum of two Matrix i,e,
|5 2 1|   |5 6 4|   |5+5  2+6  1+4|   |10 8  5|
|4 3 4| + |5 2 3| = |4+5  3+2  4+3| = |9  5  7|
|5 4 7|   |1 6 9|   |5+1  4+6  7+9|   |6 10 16|

*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a[%d%d] postion number: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter a second matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a[%d%d] postion number: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Processing: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Your Result is here:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}