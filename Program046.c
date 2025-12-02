/******************************************************************************

Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
Expected Output:
Value of series: 4.62

*******************************************************************************/
#include <stdio.h>      //Program 46

int main()
{
    int a=1;
    float b=3/2.0,c=5/4.0,d=7/8.0;
    printf("Value of series: %0.3f",a+b+c+d);
    
    return 0;
}
