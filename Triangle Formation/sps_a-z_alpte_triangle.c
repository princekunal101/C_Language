#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;

    for ( i = 65; i <= 69; i++)
    {
        for ( k = 1; k <= 69-i; k++)
        {
            printf(" ");

        }
        
        for ( j = 65; j <= i; j++)
        {
            printf("%c",j);
        }
        
        printf("\n");
    }
    
}