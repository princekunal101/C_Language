/*
size of pointers
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int x, *p;

    x=25;
    p=&x;

    printf("%d",x);
    printf("\n%d", *p);
    printf("\nSize of pointers variable p is %d", sizeof(p));

}