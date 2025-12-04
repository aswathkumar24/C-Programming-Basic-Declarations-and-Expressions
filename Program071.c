/******************************************************************************

 Copy a string into another and count its characters

Write a C program to copy a given string into another and count the number of characters copied.
Input a string
Original string: w3resource
Number of characters = 10

*******************************************************************************/
#include <stdio.h>      //Program 71

int main()
{
    char a[20],b[20];
    int count=0;
    printf("Input a string: ");
    scanf("%[^\n]%*c",a);
    
    for(int i=0;a[i]!='\0';i++)
    {
        b[i] = a[i];
        count++;
    }
    b[count]='\0';
    printf("Copied String: %s\n",b);
    printf("Number of characters: %d",count);
    

    return 0;
}
