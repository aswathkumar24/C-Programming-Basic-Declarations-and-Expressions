/******************************************************************************

Write a C program to create an extended ASCII table. Print the ASCII values 32 through 255.
Sample Output:

*******************************************************************************/
#include <stdio.h>      //Program 88

int main()
{
    for(int i=32;i<=255;i++)
    {
        printf("%c\t%d\t0X%X\n",i,i,i);
    }
    

    return 0;
}
