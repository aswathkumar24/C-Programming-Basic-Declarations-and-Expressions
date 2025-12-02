/******************************************************************************

Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24

*******************************************************************************/
#include <stdio.h>      //Program 34

int main()
{
    int a,b;
    printf("Input first number of the pair: ");
    scanf("%d",&a);
    printf("Input second number of the pair: ");
    scanf("%d",&b);
    
    if(a>b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    printf("List of odd numbers:");
    for(a;a<b;a++)
    {
        if(a%2!=0)
            printf("\n%d",a);
    }
        
    
    
    return 0;
}
