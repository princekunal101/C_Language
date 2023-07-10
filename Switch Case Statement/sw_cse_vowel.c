/*
Check input is vowel or not
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char ichar;
    printf("Enter a charecter: ");
    scanf("%c", &ichar);

    switch (ichar)
    {
    case 'a':
        printf("a is Vowel");
        break;
    case 'e':
        printf("e is Vowel");
        break;
    case 'i':
        printf("i is Vowel");
        break;
    case 'o':
        printf("o is Vowel");
        break;
    case 'u':
        printf("u is Vowel");
        break;

    default:
        printf("%c is Consonent", ichar);
        break;
    }
}