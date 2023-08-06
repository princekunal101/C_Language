/*
pointers in c language
*/

#include <conio.h>
#include <stdio.h>

void main()
{
    int x, *p;
    x = 25;
    p = &x;

    printf("%d", x);
    printf("\n%u", p);
    printf("\n%d", *p);

}