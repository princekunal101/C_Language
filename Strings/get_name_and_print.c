/*Simple get the name form th user and print that on screen
 */

#include <stdio.h>
#include <conio.h>
// now we are includeing string hedder file

void main()
{
    char s[20];
    printf("Enter a name: ");
    scanf("%s", s);

    printf("Your name: %s", s);
}
