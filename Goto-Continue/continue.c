/*
Using continue function
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, p = 1;
    for (i = 1; i < 14; i++)
    {
        if (i == 4 || i == 8)
        {
            continue;
        }
        else
        {

            p = p * i;
        }
    }
    printf("%d", p);
}