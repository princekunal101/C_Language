/*check given year is leap year or not*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d year is Leap year", year);
    }
    else
    {
        printf("%d year is not Leap year", year);
    }
}