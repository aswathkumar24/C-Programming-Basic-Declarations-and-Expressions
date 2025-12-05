/******************************************************************************

Write a C program to find all prime palindromes in the range of two given numbers x and y 
(5 <= x<y<= 1000,000,000).
A number is called a prime palindrome if the number is both a prime number and a palindrome.
Sample Output:

Input two numbers (separated by a space):
List of prime palindromes:
0
1

*******************************************************************************/
#include <stdio.h>      //Program 90

int reverse (int a)
{
    int d=0,b=0,c=0;
    d=a;
    while(d>=1)
    {
        b=d%10;
        c=c*10+b;
        d=d/10;
    }
    return c;
}

int prime_palindrome(int a)
{
    int flag=0;
    for(long long i=1;i<=a;i++)
    {
        if(a%i==0)
            flag++;
    }
    if(flag==2)
            return reverse(a);
        else 
            return 0;
}

int main()
{
    long long a,b,c=0;
    printf("A: ");
    scanf("%lld",&a);
    printf("B: ");
    scanf("%lld",&b);
    for(long long i=a;i<=b;i++)
    {
        c = prime_palindrome(i);
        if(c==i)
            printf("%lld\n",i);
    }
    return 0;
}
