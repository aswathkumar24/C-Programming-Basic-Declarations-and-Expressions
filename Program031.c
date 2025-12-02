/******************************************************************************

Write a C program to print all numbers between 1 and 100 which are divided by a specified number 
and the remainder will be 3.
Test Data :
Input an integer: 25
Expected Output:
3
28
53
78

*******************************************************************************/
#include <stdio.h>      //Program 31

void remain(int m)
{
    int i=1;
    for(i=1;i<100;i++)
    {
        if(i%m==3)
        {
            printf("\n%d",i);
        }
        
    }
}

int main()
{
    int a;
    printf("Enter the interger: ");
    scanf("%d",&a);
    remain(a);
    return 0;
}
