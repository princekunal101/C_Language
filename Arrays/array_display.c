/*Enter array and print diaplay on the screen
Array: array is the collection of integer
*/

#include<conio.h>
#include<stdio.h>

void main()
{
    int a[10], i;

    for ( i = 0; i < 10; i++)
    {
        printf("Enter %d postion number: ", i+1);
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        printf("\n%d position of number is: %d", i+1, a[i]);
    }
    
    
}