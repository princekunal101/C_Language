/*To change decimal number i,e, (456)10,
to binary number i,e, (111001000)2*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, rem, store = 0, p = 1, s;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0)
    {

        // printf("\n n %d", n);
        rem = n % 10;
        // printf("\n rem %d", rem);
        s = p * rem;
        // printf("\n s %d",s);
        store = store + s;
        // printf("\n store %d", store);
        p = p * 2;
        // printf("\n p %d", p);
        n = n / 10;
        // printf("\n n %d \n ", n);
    }

    printf("(%d)10 is the decimal number", store);
}