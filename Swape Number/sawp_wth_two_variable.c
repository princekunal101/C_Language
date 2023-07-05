/*Swapping of two digit number with two variable:
4 5: 5 4
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Before the swapping of number a and b are: %d %d", a, b);

    // swapping formula with addition - subtraction
    /*
    8:a = 3:a + 5:b
    5:b = 8:a - 5:b
    3:a = 8:a - 5:b
    */

    a = a + b;
    b = a - b;
    a = a - b;

    // you can also use multiplicantion and division method
    // Replace (+ : *) and (- : /)

    printf("\nAfter the swapping of number a nad b are: %d %d", a, b);
}