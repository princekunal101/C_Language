/*Check number is odd or even*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);


    if (a%2 == 0)
    {
        printf("%d is even number",a);
    }
    else
    {
        printf("%d is odd number",a);
    }
    
    
}