/*
Check input character is vowel or not with capital and small
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char inChar;
    printf("Enter a character: ");
    scanf("%c", &inChar);

    switch (inChar)
    {
    case 'a':
        printf("a is Vowel");
        break;
    case 'A':
        printf("A is Vowel");
        break;
    case 'e':
        printf("e is Vowel");
        break;
    case 'E':
        printf("E is Vowel");
        break;
    case 'i':
        printf("i is Vowel");
        break;
    case 'I':
        printf("I is Vowel");
        break;
    case 'o':
        printf("o is Vowel");
        break;
    case 'O':
        printf("O is Vowel");
        break;
    case 'u':
        printf("u is Vowel");
        break;
    case 'U':
        printf("U is Vowel");
        break;

    default:
        printf("%c is Consonent", inChar);
        break;
    }
}