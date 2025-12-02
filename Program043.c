/******************************************************************************

 Print p lines of q numbers in sequence starting from 1

Write a C program that reads two integers p and q, prints p number of lines in a sequence of 
1 to b in a line.
Test Data :
Input number of lines: 5
Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
*******************************************************************************/
#include <stdio.h>      //Program 43

void lines(int a, int b)
{
    int count = 1;
    if(count!=a*b)
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
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
    int a,b;
    printf("Input number of lines: ");
    scanf("%d",&a);
    printf("Number of characters in a line:  ");
    scanf("%d",&b);
    lines(a,b);

    return 0;
}
