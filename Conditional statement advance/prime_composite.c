#include<stdio.h>
#include<conio.h>

void main()
{
    int x, i, f=0;

    printf("Enter a number: ");
    scanf("%d", &x);

    for (i=2; i < x; i++)
    {
        if (x % i == 0)
        {
            f=1;
            break;
        }
        
    }
    if (f==0)
    {
        printf("%d Number is prime",x);
    }
    else 
    {
        printf("%d Number is composite",x);
    }
    
    
    
}