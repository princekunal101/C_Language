/*To print a alphabate in the form of:
E
ED
EDC
EDCB
EDCBA
*/

#include<stdio.h>
#include<conio.h>

void main()
{

    int i,j;

    for ( i = 69; i >= 65; i--)
    {
        for ( j = 69; j >=i; j--)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    
}