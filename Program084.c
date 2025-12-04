/******************************************************************************

Write a C program to calculate and print the average of some integers. Accept all the values preceding 888.
Sample Input:12
15
24
888
Sample Output:

Input each number on a separate line (888 to exit):

The average value of the said numbers is 17.000000

*******************************************************************************/
#include <stdio.h>      //Program 84

float avg()
{
    int a,count=0;
    double sum=0;
    printf("Input each number on a separate line (888 to exit):\n");
    while(1)
    {
        scanf("%d",&a);
        if(a==888)
        {
            break;
        }
        else
        {
            sum = sum+a;
            count++;
        }
    }
    return (sum/count);
}

int main()
{
    float av;
    av = avg();
    
    printf("The average value of the said numbers: %f",av);
    return 0;
}
