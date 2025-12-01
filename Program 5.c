/******************************************************************************

Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches

*******************************************************************************/
#include <stdio.h> //program 5

#define HEIGHT 7
#define WIDTH  5

int main()
{
    printf("Perimeter of Rectangle: %d",2*HEIGHT+2*WIDTH);
    printf("\n");
    printf("Area of Rectangle: %d",HEIGHT*WIDTH);
    return 0;
}
