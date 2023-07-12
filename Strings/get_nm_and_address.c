/*Get user name and address and print on screen
 */

#include <stdio.h>
#include <conio.h>

void main()
{
    char s[20];
    char s1[20];

    printf("Enter your name: ");
    scanf("%s", s);

    printf("Enter your address: ");
    scanf("%s", s1);

    printf("Your name: %s\n", s);
    printf("Your address: %s", s1);
}