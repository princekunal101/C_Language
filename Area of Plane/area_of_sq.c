/*To calculate the area of squre i,e, sum of all sides,
side * side (a*a) a^2
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, area;
    printf("Enter side of square: ");
    scanf("%d", &a);
    area = a * a;

    printf("Area of square is %d", area);
}