/******************************************************************************

Write a C program that reads and prints the elements of an array of length 7. 
Before printing, replace every negative number, zero, with 100.
Test Data:
Input the 5 members of the array:
25
45
35
65
15

Expected Output:
Array values are:
n[0] = 25
n[1] = 45
n[2] = 35
n[3] = 65
n[4] = 15

*******************************************************************************/
#include <stdio.h>      //Program 48

int main()
{
    int a,arr[10];
    printf("Number of elements: ");
    scanf("%d",&a);
    
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<a;i++)
    {
        if(arr[i]<=0)
            arr[i] = 100;
        printf("n[%d] : %d",i,arr[i]);
        printf("\n");
    }
    
}
