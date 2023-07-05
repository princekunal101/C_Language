/*To print a right angle triangle with same digit in a row:
1
22
333
4444
55555
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, count = 5;

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }
}