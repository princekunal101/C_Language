/*Armstrong number is that sum of all digit of cube
e.g. 153
1^3+5^3+3^3 = 153 */

#include<conio.h>
#include<stdio.h>

void main()
{
    int x,i,s=0,y;
    printf("Enetr a number: ");
    scanf("%d",&y);

    x=y;

    while (x>0)
    {
        i= x%10;

       // printf("\n << %d",i);

        s= s+i*i*i;
       // printf("\n %d \n",s);

        x=x/10;

    }

    if (y==s)
    {
        printf("%d number is armstrong",y);
    }
    else
    {
        printf("%d number is not armstrong",y);
    }
    
    


}