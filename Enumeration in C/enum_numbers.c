/*
customised value
*/

#include <stdio.h>
#include <conio.h>

enum number
{
    first,
    second,
    third,
    forth,
    fifth = 10,
    sixth,
    seventh,
};

void main()
{
    enum number a, b, c;

    a = third;
    b = fifth;
    c = sixth;

    printf("%d number", a);
    printf("\n%d number", b);
    printf("\n%d number", c);
}