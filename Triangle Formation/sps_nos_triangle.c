#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k, count= 5;

    for ( i = 1; i <= count; i++)
    {
        for ( k = 1; k <= count-i; k++)
        {
            printf(" ");
        }

        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }

        printf("\n");
        
        
    }
    
}