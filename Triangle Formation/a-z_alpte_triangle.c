/*To print a triangle with accending alphabate:
A
AB
ABC
ABCD
ABCDE
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;

    for ( i = 65; i <= 69; i++)
    {
        for ( j = 65; j <= i; j++)
        {
            printf("%c",j);
        }

        printf("\n");
        
    }
    
}