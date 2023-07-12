/*
strcpy is the function for copy one string to another string
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20] = "This is";
    char b[20];

    strcpy(b, a);
    // strcpy copy the string 'a' to 'b'
    puts(a);
    puts(b);
}