/*To change to binary number i,e, (111001000)2,
to decimal number i,e, (456)10,*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, p = 1, s, rem, store = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 2;
        // printf("\n *%d",rem);

        s = p * rem;
        // printf("\n -%d", s);

        store = store + s;
        // printf("\n .%d", store);

        p = p * 10;
        n = n / 2;
    }

    printf("(%d)2 is the binary number", store);
}