/*To check given cheracter is vowel or consonant
vowel: a,e,i,o,u
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if (a == 'a')
    {
        printf("%c is vowel", a);
    }
    else if (a == 'e')
    {
        printf("%c is vowel", a);
    }
    else if (a == 'i')
    {
        printf("%c is vowel", a);
    }
    else if (a == 'o')
    {
        printf("%c is vowel", a);
    }
    else if (a == 'u')
    {
        printf("%c is vowel", a);
    }
    else
    {
        printf("%c is consonent", a);
    }
}