/*Fibonacci is series of number i,e, result + privious number,
0 1 1 2 3 5 8 13 ... */

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, x, i;

    printf("Enter a number: ");
    scanf("%d", &x);

    a= 0;
    b= 1;

    printf("\n %d",a);
    printf("\n %d",b);

    do
    {
        c = a+b;
        printf("\n %d",c);
        a=b;
        b=c;

    } while (c<=x);
    
}