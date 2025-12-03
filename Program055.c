/******************************************************************************

 Swap two numbers without a temporary variable

Write a C program that swaps two numbers without using a third variable.
Input value for x & y:
Before swapping the value of x & y: 5 7
After swapping the value of x & y: 7 5

*******************************************************************************/
#include <stdio.h>      //Program 55

int swap(int a, int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("After swapping the value of x & y: %d %d",a,b);
    return 0;
}
    

int main()
{
    int x,y;
    printf("Input value for x: ");
    scanf("%d",&x);
    printf("Input value for y: ");
    scanf("%d",&y);    
    printf("Before swapping the value of x & y: %d %d\n",x,y);
    swap(x,y);
    
    return 0;
}
