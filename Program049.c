/******************************************************************************

Write a C program to read and print the elements of an array with length 7.
Before printing, insert the triple of the previous position, starting from the second position.
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
Test Data:
Input the first number of the array: 5
Expected Output:
n[0] = 5
n[1] = 15
n[2] = 45
n[3] = 135
n[4] = 405

*******************************************************************************/
#include <stdio.h>      //Program 49

int main()
{
    int a;
    int arr[10];
    printf("Input the first number of the array: ");
    scanf("%d",&a);
    arr[0] = a;
    for(int i=1;i<7;i++)
    {
        arr[i] = arr[i-1]*3;
    }
    
    for(int i=0;i<7;i++)
    {
        printf("\nn[%d] : %d",i+1,arr[i]);
    }
        
    

    return 0;
}
