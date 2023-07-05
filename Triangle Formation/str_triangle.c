/*To print a right angle triangle with strc:

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
    int i, j, count = 7;

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}