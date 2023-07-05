/*to verify charecter is vowel or consonant
vowel: a, A, e, E, i, I, o, O, u, U
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if (a == 'a' || a == 'A' || a == 'e' || a == 'E' ||
        a == 'i' || a == 'I' || a == 'o' || a == 'O' ||
        a == 'u' || a == 'U')
    {
        printf("%c is vowel", a);
    }
    else
    {
        printf("%c is consonant", a);
    }
}