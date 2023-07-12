/*Here use strlen function for count character
 */

#include <stdio.h>
#include <conio.h>
// we have to include string.h for using strlen function
#include <string.h>

void main()
{
    char a[20] = "C Program";

    printf("The length of a is %d", strlen(a));
}