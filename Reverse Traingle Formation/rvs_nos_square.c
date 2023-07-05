/*To print a square form of number:
54321
54321
54321
54321
54321
*/

#include <stdio.h>
#include <conio.h>

void main()
{

    int i, j, count = 5;

    for (i = count; i >= 1; i--)
    {
        for (j = count; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}