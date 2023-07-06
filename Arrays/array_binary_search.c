/*Binary search is the method of searching which works as
It must be in a shorting form (Accending/Decending)
 */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, a[10], search, first, last, mid;

    for (i = 0; i < 10; i++)
    {
        printf("Enter %d position number: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter Element to be searched: ");
    scanf("%d", &search);

    first = 0;
    last = 9;

    mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] == search)
        {
            printf("Number is found");
            break;
        }
        else if (a[mid] < search)

            first = mid + 1;
        else
            last = mid - 1;
        mid = (first + last) / 2;
    }

    if (first > last)
    {
        printf("Number is not found!");
    }
}