/*Searching the number in array
it is also called linear search
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], i, search, f;
    f = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter %d postion number: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter for search: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++)
    {
        if (search == a[i])
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        printf("Search item is found");
    }
    else
    {
        printf("Search item not found");
    }
}
