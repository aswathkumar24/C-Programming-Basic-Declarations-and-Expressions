/******************************************************************************

Print numbers with their squares and cubes for n lines

Write a C program to print a number, its square and cube, starting with 1 and printing n lines.
Accept the number of lines (n, integer) from the user.
Test Data :
Input number of lines: 5
Expected Output:
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
*******************************************************************************/
#include <stdio.h>      //Program 42

void lines(int a)
{
    for(int i=1;i<=a;i++)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
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
