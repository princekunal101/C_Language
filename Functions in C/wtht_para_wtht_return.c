/*Without parameter: without returning value
 */

#include <stdio.h>
#include <conio.h>

void sum();

void main()
{
    sum();
}

void sum()
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    c = a + b;

    printf("Sum of two number is %d", c);
}