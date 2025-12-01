/******************************************************************************

Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches

*******************************************************************************/
#include <stdio.h>  //Program 6

#define PI 3.14159

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Perimeter of Circle: %lf", 2*PI*r);
    printf("\nArea of Circle: %lf", PI*r*r);
    return 0;
}
