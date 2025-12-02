/******************************************************************************

Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. 
Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd

*******************************************************************************/
#include <stdio.h>      //Program 32--->31

int main()
{
   int a;
   printf("Input an integer: ");
   scanf("%d",&a);
   if(a>0&&a%2!=0)
        printf("Positive Odd");
    else if(a>0&&a%2==0)
        printf("Positive Even");
    else if(a<0&&a%2!=0)
        printf("Negative Odd");
    else if(a<0&&a%2==0)
        printf("NEgative Even");
    return 0;
}
