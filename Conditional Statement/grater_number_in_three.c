/*Gratest number between three numbers
e.g. 45 55 48
output: 55*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is gratter number", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is gratter number", b);
    }
    else
    {
        printf("%d is gratter number", c);
    }
}