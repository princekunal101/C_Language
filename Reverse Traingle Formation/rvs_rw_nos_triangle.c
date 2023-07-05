/*To print a triangle with reverse value:
5
44
333
2222
11111
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,count=5;

    for ( i = count; i >= 1; i--)
    {
        for ( j = count; j >= i; j--)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
    
}