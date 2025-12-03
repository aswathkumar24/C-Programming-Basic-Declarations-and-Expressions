/******************************************************************************

Write a C program to evaluate the equation y=xn when n is a non-negative integer.
Input the values of x and n: 256
x=256.000000; n=0;
x to power n=1.000000

*******************************************************************************/
#include <stdio.h>      //Program 67

int main()
{
    int n,x;
    long y=1;
    printf("Input the values of x: ");
    scanf("%d",&x);
    printf("Input the values of n: ");
    scanf("%d",&n);
    if(n==0)
    {
        y = 1;
    }
    else if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            y=y*x;
        }
    }
    
    printf("%d to power %d : %ld",x,n,y);
    return 0;
    
}

