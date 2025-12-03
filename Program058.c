/******************************************************************************

Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between 
the maximum and minimum values of these four numbers.
Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380

*******************************************************************************/
#include <stdio.h>      //Program 58

int main()
{
    double a[4];
    double max,min;
    printf("Input four numbers: \n");
    for(int i=0;i<4;i++)
    {
        scanf("%lf",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(int i=0;i<4;i++)
    {
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    
    printf("Difference : %0.4lf",max-min);
    return 0;
}
