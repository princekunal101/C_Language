/*
Calling the function by refrence
*/

#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b);

void main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("\n Value are %d %d ", x, y);
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("After swappimg values are %d %d", *a, *b);
}