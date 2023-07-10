/*
Printing a to z*/

#include <conio.h>
#include <stdio.h>

void main()
{
    int i = 65, j = 1;

    while (j <= 26)
    {

        printf(" %c \t", i);
        //A B C D E F G H I J K L M N O P 
        //Q R S T U V W X Y Z 

        // for small letter
        printf("%c \t", i + 32);
        // a b c d e f g h i j k l m o p 
        //q r s t u v w x y z

        j++;
        i++;
    }
}
