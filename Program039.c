/******************************************************************************

Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521
*******************************************************************************/
#include <stdio.h>//Program 39

int main()
{
    int a,b,sum=0;
    printf("Input the first integer: ");
    scanf("%d",&a);
    printf("Input the second integer: ");
    scanf("%d",&b);
    
    for(a;a<=b;a++)
    {
        if(a%17==0)
            continue;
        else
        {
            sum = sum+a;
        }
    }
    
    printf("Sum : %d",sum);
        
    

    return 0;
}
