/******************************************************************************

Write a C program that reads 5 numbers and sums all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46

*******************************************************************************/
#include <stdio.h>  //Program 22

int main()
{
   int a[5],sum=0,i;
   
   for(int i=0;i<5;i++)
   {
       printf("Input the %d number: ",i);
       scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
       if(a[i]%2!=0)
       {
           sum = sum+a[i];
       }
   }
   
   printf("Sum of all odd values: %d",sum);
   
}
