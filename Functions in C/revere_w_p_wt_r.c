/*
reverse with parameter without returning value
*/

#include <stdio.h>
#include <conio.h>

void reverse(int);

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(num);
}

void reverse(int num)
{
    int rev;

    while (num > 0)
    {
        rev = num % 10;

        printf("%d", rev);

        num = num / 10;
    }
}