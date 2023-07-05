/*To print a reverse tringle with accending number:
12345
1234
123
12
1
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, count = 5;

    for (i = count; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}