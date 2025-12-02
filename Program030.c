/******************************************************************************

Write a C program to find and print the square of all the even values from 1 to a specified value.
Test Data :
List of square of each one of the even values from 1 to a 4 :
Expected Output:
2^2 = 4
4^2 = 16

*******************************************************************************/
#include <stdio.h>  //Program 30

void square(int a)
{
    int i=1;
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("\n%d^2 =%d",i,i*i); 
        }
    }
}

int main()
{
    int a;
    printf("Limit: ");
    scanf("%d",&a);
    square(a);
}
