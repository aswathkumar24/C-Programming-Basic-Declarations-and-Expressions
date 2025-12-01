/******************************************************************************

Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444

*******************************************************************************/
#include <stdio.h>      //Program 11

int main()
{
    double w1,w2;
    int i1,i2;
    double avg;
    printf("Weight - Item1: ");
    scanf("%lf",&w1);
    printf("No. of item1: ");
    scanf("%d",&i1);
    printf("Weight - Item2: ");
    scanf("%lf",&w2);
    printf("No. of item2: ");
    scanf("%d",&i2);
    avg = ((w1*i1)+(w2*i2))/(i1+i2);
    printf("Average Value: %lf",avg);
    return 0;
}
