/*To garde of student from five subject with:
avreage: (a+b+c+d+e)/5
A: >= 85 <= 100
B: >= 60 < 85
C: >= 50 < 60
D: >= 40 < 50
E: < 40
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, d, e, sum;
    float avg;

    printf("Enter all subject number between 0-100: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    avg = sum / 5;

    printf("Total marks of student is %d", sum);
    printf("\nAverage Marks of student is %f \n", avg);

    if (avg >= 85 && avg <= 100)
    {
        printf("Grade is A");
    }
    else if (avg >= 60 && avg < 85)
    {
        printf("Grade is B");
    }
    else if (avg >= 50 && avg < 60)
    {
        printf("Grade is C");
    }
    else if (avg >= 40 && avg < 50)
    {
        printf("Grade is D");
    }
    else if (avg < 40)
    {
        printf("Grade is E");
    }
}