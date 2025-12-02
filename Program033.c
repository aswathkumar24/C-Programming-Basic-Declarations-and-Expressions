/******************************************************************************

Write a C program that accepts some integers from the user and finds the highest value and the input position.
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5

*******************************************************************************/
#include <stdio.h>      //Program 33

void get(int arr[],int a)
{
    int i,j,max,pos=0;
    for(int i=0;i<a;i++)
    {
        printf("%d\t",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        max=arr[0];
        if(arr[i]>max)
        {
            max = arr[i];
            pos = i+1;
        }
    }
    printf("Highest value: %d\nPosition: %d",max,pos);
}


int main()
{
    int arr[100],i,a;
    printf("Enter how many integers: ");
    scanf("%d",&a);
    get(arr,a);
    return 0;
}
