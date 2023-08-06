/*
enum nubers
*/

#include <conio.h>
#include <stdio.h>

enum number
{
    first,
    second,
    third,
    forth,
    fifth,
    sixth,
    seventh,

};
void main()
{
    enum number x, y;

    x = third;
    y = fifth;
    printf("%d number", x);
    printf("\n%d number ", y);
}