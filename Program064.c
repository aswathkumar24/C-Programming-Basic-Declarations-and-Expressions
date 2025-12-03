/******************************************************************************

Write a C program that accepts integers from the user until a zero or a negative number, 
displays the number of positive values, the minimum value, the maximum value, 
and the average value.
Input a positive integer:
Input next positive integer: 15
Input next positive integer: 25
Input next positive integer: 37
Input next positive integer: 43
Number of positive values entered is 4
Maximum value entered is 43
Minimum value entered is 15
Average value is 30.0000

*******************************************************************************/
#include <stdio.h>      //Program 64

int main()
{
    int a,max=0,min=0,count=0,sum=0;
    float avg;
    printf("Input a positive integer: ");
    min=a;
    while(1)
    {
        scanf("%d",&a);
        
        if(a>0)
        {
            printf("Input next positive integer: ");
            count++;
            sum = sum+a;
            if(a>max)
                max=a;
            if (a<min)
            {
                min=a;
            }
                
        }
        else if(a==0||a<0)
        {
            printf("Number of positive values entered: %d\n",count);
            printf("Maximum value entered: %d\n",max);
            printf("Minimum value entered: %d\n",min);
            avg = sum/count;
            printf("Average value: %0.4f\n",avg);
            break;
        }
        
    }
        
    

    return 0;
}
