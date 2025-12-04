/******************************************************************************

Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.
Sample Input: 10
Sample Output:

Input the size of the square: 
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #

*******************************************************************************/
#include <stdio.h>      //Program 80

int main()
{
    int a;
    printf("Input the size of the square:  ");
    scanf("%d",&a);
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("#  ");
        }
        printf("\n");
        
    }

    return 0;
}
