/*Graterset number between two numbers
e.g. 5 >3
*/

#include <conio.h>
#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is gratter", a);
    }

    else
    {
        printf("%d is gratter", b);
    }
}