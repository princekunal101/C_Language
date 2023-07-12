/*
Wriring a table with parameter and without return
*/

#include<stdio.h>
#include<conio.h>

void table(int);

void main()
{
    int tab;

    printf("Enter a number for table: ");
    scanf("%d", &tab);

    table(tab);
}

void table(int tab)
{
    int i, result;

    for ( i = 1; i <= 10; i++)
    {
        result = tab*i; 
        printf("%d * %d = %d\n", tab, i, result);
    }
    
}