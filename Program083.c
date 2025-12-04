/******************************************************************************

Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number.
Sample Input: 538453
Sample Output:

Input a number: The number of threes in the said number is 2
*******************************************************************************/
#include <stdio.h>      //Progam 83

int main()
{
    long a;
    int b,count=0;
    
    printf("Input a number : ");
    scanf("%ld",&a);
    while(a!=0)
    {
        b = a%10;
        if(b==3)
        {
            count++;
        }
        a = a/10;
    }
    printf("The number of threes in the said number: %d",count);

    return 0;
}
