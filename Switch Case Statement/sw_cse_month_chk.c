/*
Check number as a months
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int month;
    printf("Entre a number: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Month %d is January", month);
        break;
    case 2:
        printf("Month %d is February", month);
        break;
    case 3:
        printf("Month %d is March", month);
        break;
    case 4:
        printf("Month %d is April", month);
        break;
    case 5:
        printf("Month %d is May", month);
        break;
    case 6:
        printf("Month %d is June", month);
        break;
    case 7:
        printf("%d month is July", month);
        break;
    case 8:
        printf("Month %d is August", month);
        break;
    case 9:
        printf("Month %d is September", month);
        break;
    case 10:
        printf("Month %d is Octuber", month);
        break;
    case 11:
        printf("Month %d is November", month);
        break;
    case 12:
        printf("Month %d id December", month);
    default:
        printf("Ivalid month");
        break;
    }
}