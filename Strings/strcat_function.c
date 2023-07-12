/*Strcat function concatinate two
string mean to join and form and string
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20] = "This is";
    char b[20] = "C Program";

    strcat(a, b);
    //strcat function add two charactor on the first string only
    //here puts is the builten function for printing strings only

    puts(a);
    //This isC Program
    puts(b);
    //C program
}