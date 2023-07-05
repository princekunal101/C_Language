/*Change number to month:
month 1: January
month 2: February
month 3: March
month 4: April
month 5: May
month 6: June
month 7: July
month 8: August
month 9: September
month 10: Octuber 
month 11: November
month 12: December
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int month;

    printf("Enter a month number: ");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("%d month is January", month);
    } else if (month == 2)
    {
        printf("%d month is February", month);
    } else if (month == 3)
    {
        printf("%d month is March", month);
    } else if (month == 4)
    {
        printf("%d month is April", month);
    } else if (month == 5)
    {
        printf("%d month is May", month);
    } else if (month == 6)
    {
        printf("%d month is June", month);
    } else if (month == 7)
    {
        printf("%d month is July", month);
    } else if (month == 8)
    {
        printf("%d month is August", month);
    } else if (month == 9)
    {
        printf("%d month is September", month);
    } else if (month == 10)
    {
        printf("%d month is Octuber", month);
    } else if (month == 11)
    {
        printf("%d month is November", month);
    } else if (month == 12)
    {
        printf("%d month is December", month);
    } else
    {
        printf("%d month is Invalid", month);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
}