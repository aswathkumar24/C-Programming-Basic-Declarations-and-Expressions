/******************************************************************************

Write a C program that reads a five-digit integer and determines whether or not it's a palindrome.
Sample Input: 33333
Sample Output:

Input a five-digit number: 33333 is a palindrome.

*******************************************************************************/
#include <stdio.h>  //Program 82

int main()
{
    long a,c=0,d;
    int b;
    printf("Input a five-digit number:  ");
    scanf("%ld",&a);
    d=a;
    while(a!=0)
    {
        b = a%10;
        c = c*10+b;
        a = a/10;
    }
    if(d==c)
    {
        
        printf("%ld is a palindrome",d);
    }
    else 
        printf("%ld is not a palindrome",d);
    return 0;
}
