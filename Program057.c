/******************************************************************************

Write a C program to reverse and print a given number.
Input a number:
The original number = 234
The reverse of the said number = 432

*******************************************************************************/
#include <stdio.h>          //Program 57

    
int reverse(int a)
{
    int r,b=0;
    while(a>=1)
    {
        r = a%10;
        b = b*10+r;
        a = a/10;
    }
    return b;
}

int main()
{
    long a,r;
    printf("Input a number: ");
    scanf("%ld",&a);
    
    printf("The original number : %ld\n",a);
    r = reverse(a);

    printf("The reverse of the said number : %ld",r);
    return 0;
}
