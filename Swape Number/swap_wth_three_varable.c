/*To swapping of two number with three variable:
14 25 : 25 14
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, z;

    printf("Enter two number: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping of number a and b are: %d %d", x, y);

    // swapping formula
    z = x;
    x = y;
    y = z;

    printf("\nAfter swapping the number a and b are: %d %d", x, y);
}