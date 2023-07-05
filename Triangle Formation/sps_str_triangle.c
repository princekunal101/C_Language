/*To print a mirror of right angle triangle with strc:

      *
     **
    ***
   ****
  *****
 ******
*******

*/

#include <stdio.h>
#include <conio.h>

void main()
{

    int i, j, k, count = 7;

    for (i = 1; i <= count; i++)
    {
        for (k = 1; k <= count - i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}