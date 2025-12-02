/******************************************************************************

Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
Test Data :
Input Mathematics marks (0 to terminate): 10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50

*******************************************************************************/
#include <stdio.h>      //Program 44

int main()
{
    int count=0;
    double a,avg=0,sum=0;
    
    printf("Input Mathematics marks (0 to terminate): \n");
    while(1)
    {
        scanf("%lf",&a);
        if(a!=0)
        {
            sum = sum+a;
            count++;
        }
        else 
            break;
    }
    avg = sum/count;
    printf("Average marks in Mathematics: %0.2lf",avg);
    
    return 0;
}
