/*
Appling sum function 1 to 10
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, sum;

    i = 1;
    sum = 0;

    do
    {
        sum = sum + i;
        i = i+1;

    } while (i <= 10);

    printf("Sum of ten number is %d", sum);
}