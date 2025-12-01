/******************************************************************************

Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX

*******************************************************************************/
#include <stdio.h>      //Program 4

int main()
{
    char a = 'X';
    char b = 'M';
    char c = 'L';
    
    printf("Reverse of %c%c%c: %c%c%c",a,b,c,c,b,a);
    return 0;
}
