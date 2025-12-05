/******************************************************************************

Write a C program to find the last non-zero digit of the factorial of a given positive integer.
For example for 5!, the output will be "2" because 5! = 120, and 2 is the last nonzero digit of 120
Sample Output:

Input a positive number:
The last non-zero digit of the said factorial:
0

*******************************************************************************/
#include <stdio.h>      //Program 92

int zero(long b)
{
    long x,y,z;
    x=b;
    if(x%10==0)
    {
        x = x/10;
        y = x%10;
        return y;
    }
    else
        return x%10;
}


int factorial(int a)
{
    int i=1;
    while(a!=0)
    {
        i=i*a;
        a--;
    }
    printf("Factorial: %d\n",i);
    return zero(i);
}

int main()
{
    int a,c; 
    printf("Enter the number: ");
    scanf("%d",&a);
    c = factorial(a);
    printf("The last non-zero digit of the said factorial: %d",c);

    return 0;
}
