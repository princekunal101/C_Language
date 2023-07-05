/*To print a acute angle triangle with number:
    1
   123
  12345
 1234567
123456789
*/

#include <stdio.h>
#include <conio.h>

void main()
{

    int i, j, k, l, count = 5;

    for (i = 1; i <= count; i++)
    {
        for (k = 1; k <= count - i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (l = j; l <= j + i - 2; l++)
        {
            printf("%d", l);
        }

        printf("\n");
    }
}