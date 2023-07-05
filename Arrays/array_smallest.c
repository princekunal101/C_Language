/*To Determine the smallest number in array*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10], min, i;

    for ( i = 0; i < 10; i++)
    {
        printf("Enter %d position number: ", i+1);
        scanf("%d", &a[i]);
    }

    min = a[0];
    for ( i = 0; i < 10; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        
    }
    printf("The Smallest number in array is: %d", min);
    
    
}
