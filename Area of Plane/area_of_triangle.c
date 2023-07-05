/*To calculate the area of triangle i,e, base * height (b*h)*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, area;
    printf("Enter base and height of triangle: ");
    scanf("%d %d", &a, &b);

    c = b/2;
    area = a*c;

    printf("Area of triangle is %d", area);


}