/* It compares two strings charactor by chasrcter,
If both strings are equal function returns zero vaslue
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20] = "This is";
    char b[20] = "THIS IS";
    int i;

    i = strcmp(a, b);

    if (i == 0)
    {
        printf("Both string are equal");
    }
    else
    {
        printf("String are not Equal");
    }
}