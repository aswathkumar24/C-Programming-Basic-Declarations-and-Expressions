/******************************************************************************

Print n lines of 3 consecutive numbers starting from 1

Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. 
Accept the number of lines (n, integer) from the user.
Test Data :
Input number of lines: 5
Expected Output:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15

*******************************************************************************/
#include <stdio.h>      //Program 41

void lines(int a)
{
    int count = 1;
    if(count!=a*3)
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=3;j++)
            {
                printf("%d\t",count);
                count++;
            }
            printf("\n");
        }
    }
}
    


int main()
{
    int a;
    printf("Input number of lines: ");
    scanf("%d",&a);
    lines(a);

    return 0;
}
