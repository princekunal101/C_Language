/*To check given number is positive or negative*/

#include<stdio.h>
#include<conio.h>

void main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d is Positive number", num);
    }else
    {
        printf("%d is Negative number", num);
    }
    
    

}