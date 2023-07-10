/*
Multiply two matries i,e,

|2 6 4|    |5 1 3|
|2 6 4|  * |2 6 4|  =
|1 3 4|    |4 0 5|

|(2*5)+(6*2)+(4*4)    (2*1)+(6*6)+(4*0)    (2*3)+(6*4)+(4*5)|
|(2*5)+(6*2)+(4*4)    (2*1)+(6*6)+(4*0)    (2*3)+(6*4)+(4*5)|
|(1*5)+(3*2)+(4*4)    (1*1)+(3*6)+(4*0)    (1*3)+(3*4)+(4*5)|


*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;

    printf("Enter a first Matrix: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a[%d%d] position number: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter a second Matrix: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter b[%d%d] postion number: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Processing...\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for (k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][i];
            }
        }
    }

    printf("Your Reslut is here: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}