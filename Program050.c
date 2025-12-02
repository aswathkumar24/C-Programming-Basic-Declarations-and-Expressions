/******************************************************************************

Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
Test Data:
Input the 5 members of the array:
15
25
4
35
40
Expected Output:
A[2] = 4.0

*******************************************************************************/
#include <stdio.h>      //Program 50

int main()
{
   int arr[5];
   
   printf("Input the 5 members of the array: \n");
   for(int i=0;i<5;i++)
   {
       scanf("%d",&arr[i]);
   }
   
   for(int i=0;i<5;i++)
   {
       if(arr[i]<5)
       {
           printf("\nA[%d] : %d",i,arr[i]);
       }
   }

    return 0;
}
