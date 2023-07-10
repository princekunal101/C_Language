/*
Printing a number decrement with 5 in 50
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 50;

    do
    {
        printf("\n %d", i);
        i = i - 5;
    } while (i >= 1);
}