/******************************************************************************

Find the smallest element in an array and its position

Write a C program to read an array of length 6 and find the smallest element and its position.
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3

*******************************************************************************/
#include <stdio.h>      //Program 52

void small(int arr[], int a)
{
    int min,pos=0;
    min = arr[0];
    for(int i=0;i<a;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            pos = i;
        }
    }
    
    printf("Smallest Value: %d",min);
    printf("\nPosition of the element: %d",pos);
    
}

int main()
{
    int a,arr[10];
    printf("Input the length of the array: ");
    scanf("%d",&a);
    printf("Input the array elements: \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    small(arr,a);
    return 0;
}
