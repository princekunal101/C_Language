#include<stdio.h>
#include<conio.h>

void main()
{
    int x,i;
    printf("Enter a number: ");
    scanf("%d",&x);

    while (x>0)
    {
        //i have get remainder value .
        i = x%10;
        //printing value one-by-one.
        printf("%d",i);
        //x get qutinent value.
        x=x/10;
    }
    
}