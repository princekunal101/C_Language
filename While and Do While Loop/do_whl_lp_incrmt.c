/*
Printing number with increment
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1;

    do
    {
        printf("\n %d", i);
        i = i+1;
    } while (i <= 20);
}