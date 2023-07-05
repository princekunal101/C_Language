/*To calculate area of rectangle:
which formula of rectangle is length * bredth: (l*b)*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, area;
    printf("Enter rectangle l and b: ");
    scanf("%d %d", &a, &b);

    area = a * b;

    printf("Area of rectangle is %d", area);
}