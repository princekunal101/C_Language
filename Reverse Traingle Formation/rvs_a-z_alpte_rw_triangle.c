/*To print a reverse triangle in form of:
D
CC
BBB
AAAA
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;

    for (i = 69; i >= 65; i--)
    {
        for (j = 1; j <= 69 - i; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
}