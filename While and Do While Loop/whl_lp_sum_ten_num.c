/*
Applying sum function
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int sum, i;

    sum = 0;
    i = 1;

    while (i <= 10)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("Sum of 10 number is %d", sum);
}