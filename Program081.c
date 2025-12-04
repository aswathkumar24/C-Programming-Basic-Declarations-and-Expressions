/******************************************************************************

Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using the hash (#) character.
Sample Input: 10
Sample Output:

Input the size of the square: 
##########
#        #
#        #
#        #
#        #
#        #
#        #
#        #
#        #
##########

*******************************************************************************/
#include <stdio.h>      //Program 81

int main()
{
    int a;
    printf("Input the size of the square:  ");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        if(i==0||i==a-1)
        {
            for(int j=0;j<a;j++)
            {
                printf("#  ");
            }
            printf("\n");
        }
        else
        {
            for(int j=0;j<a;j++)
            {
                if(j==0||j==a-1)
                {
                    printf("#  ");
                }
                else
                    printf("   ");
            }
            printf("\n");
        }
            
        
        
    }

    return 0;
}
