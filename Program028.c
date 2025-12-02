/******************************************************************************

Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00

*******************************************************************************/
#include <stdio.h>      //Program 28

int main()
{
    int a[5],i,positive=0;
    double sum=0;
    
    for(i=0;i<5;i++)
    {
        printf("Input the %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            positive++;
            sum = sum+a[i];
        }
        
    }
    printf("Number of positive numbers: %d",positive);
    printf("\nAverage value of the said positive numbers: %0.2lf",sum/positive);

    return 0;
}
