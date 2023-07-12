/*Here get the String from the user and
calulate the length of that string
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20];

    printf("Enter a String: ");
    scanf("%s", a);

    printf("Length of String is: %d", strlen(a));
}