/*Palindrom number is comparing of number and reverse number,
12345 = 54321*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int x, rev = 0, i, k;
    printf("Enter a number: ");
    scanf("%d", &k);

    x = k;

    while (x > 0)
    {
        i = x % 10;

        rev = rev * 10 + i;

        x = x / 10;
    }

    if (rev == k)
    {
        printf("%d number is palindrom", k);
    }
    else
    {
        printf("%d number is not palindrom", k);
    }
}