/******************************************************************************

Write a C program that accepts a positive integer n less than 100 from the user. 
It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. In this case,
m is less than or equal to n. Print an appropriate message.
Test data and expected output:
Input a positive number less than 100:  7
Sum of the series is 1024388

*******************************************************************************/
#include <stdio.h>      //Program 63 reached answer in 7

int main()
{
    int a,arr[100],b[100];
    long sum=0;
    printf("Input a positive number less than 100: ");
    scanf("%d",&a);
    if(a<0||a>100)
        printf("Please enter the number again");
    else
    {
        arr[0] = 1;
        for(int i=1;i<=a;i++)
        {
            arr[i] = arr[i-1]+i;
        }
            
        for(int i=0;i<=a;i++)
        {
            sum = sum+(arr[i]*arr[i]*arr[i]*arr[i]);
        }
        printf("Sum of the series : %ld",sum);
    }
    return 0;
}
