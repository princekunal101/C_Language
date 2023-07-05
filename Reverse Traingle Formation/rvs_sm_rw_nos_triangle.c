/*To print a reverse tringle with same number in line
55555
4444
333
22
1
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j, count= 5;

    for ( i = count; i >=1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",i);

        }
        printf("\n");
    }
    
}