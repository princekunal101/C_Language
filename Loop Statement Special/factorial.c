/*
Get a number from user and display Factorial 
i,e, 5: 5 * 4 * 3 * 2 * 1
*/

#include<conio.h>
#include<stdio.h>

void main()
{
    int inum, i, fact=1;

    printf("Enter a number: ");
    scanf("%d", &inum);

    for ( i = 1; i <= inum; i++)
    {
        fact = fact * i;
        
    }
    
    printf("The factorial of %d! is %d", inum, fact);
    
}