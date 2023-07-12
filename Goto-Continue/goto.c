/*
Go to Function is jump to next code directly
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        goto abc;
    }
    else
    {
        goto xyz;
    }

abc:
    printf("%d is larger", a);

xyz:
    printf("%d is larger", b);
}
