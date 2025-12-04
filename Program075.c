/******************************************************************************

Write a C program that accepts a seven-digit number, separates the number into its individual digits,
and prints the digits separated from one another by two spaces each.
Sample Input: 2345678
Input a seven digit number:
Output: 2 3 4 5 6 7 8

*******************************************************************************/
#include <stdio.h>      //Program 75

int main()
{
    long long int a,c=0,d;
    int b;
    printf("Input a seven digit number: ");
    scanf("%lld",&a);
    
    while(a!=0)     //Reverse
    {
        d = a%10;
        c = (c*10)+d;
        a = a/10;
    }
    while(c!=0)     //Spacing
    {
        b = c%10;
        c = c/10;
        printf("%d\t",b);
    }
    
    return 0;
}
