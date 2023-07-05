/*Check given number is even or odd
even: which number is fully divisible by 2
odd: which number is not fully divisible by 2
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even number", num);
    } else
    {
        printf("%d is odd number", num);
    }
    
    
}