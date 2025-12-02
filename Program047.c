/******************************************************************************

Write a C program that finds all the divisors of an integer.
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45

*******************************************************************************/
#include <stdio.h>      //Program 47

void divisor(int a)
{
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
            printf("%d\n",i);
    }
    
}

int main()
{
    int a;
    printf("Input an integer: ");
    scanf("%d",&a);
    divisor(a);
}
