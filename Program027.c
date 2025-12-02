/******************************************************************************

Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5],i,positive=0,negative=0;
    for(i=0;i<5;i++)
    {
        printf("Input the %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
            positive++;
        else if(a[i]<0)
            negative++;
    }
    printf("Number of positive numbers: %d\nNumber of negative numbers: %d",positive,negative);
    
    return 0;
}
