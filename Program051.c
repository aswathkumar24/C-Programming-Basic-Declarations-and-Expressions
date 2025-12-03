/******************************************************************************

Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15

*******************************************************************************/
#include <stdio.h>      //Program 51

void reverse(int arr[],int a)
{
    int len = a/2,temp; 
    for(int i=0,j=a-1;i<len;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
    }
    
    for(int i=0;i<a;i++)
    {
       printf("array_n[%d] : %d\n",i,arr[i]); 
    }
        
    
}


int main()
{
    int a,arr[10];
    printf("Enter number of elements: ");
    scanf("%d",&a);
    printf("Input the %d members of the array: \n",a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,a);
    return 0;
}
