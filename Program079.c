/******************************************************************************

Write a C program using looping to produce the following table of values.
Sample Output:

x       x+2     x+4     x+6
--------------------------------
1       3       5       7
4       6       8       10
7       9       11      13
10      12      14      16
13      15      17      19

*******************************************************************************/
#include <stdio.h>      //Program 79

int main()
{
    int a[5]={1,4,7,10,13};
    printf("x\tx+2\tx+4\tx+6\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t%d\t%d\t%d\n", a[i],a[i]+2,a[i]+4,a[i]+6);
    }

    return 0;
}
