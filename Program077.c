/******************************************************************************

Write a C program that accepts principal amount, rate of interest and days for a loan and 
calculates the simple interest for the loan, using the following formula.
interest = principal * rate * days / 365.
Sample Input:
10000
.1
365
0
Sample Output:
Input loan amount (0 to quit): Input interest rate: Input term of the loan in days: 
The interest amount is $1000.00
Input loan principal_amt (0 to quit):

*******************************************************************************/
#include <stdio.h>      //PRogram 77
#include <assert.h>

int main()
{
    int l,d;
    float r;
    printf("Input loan amount (0 to quit): ");
    scanf("%d",&l);
    if(l==0)
    {
        assert(0);
    }
    printf("Input interest rate: ");
    scanf("%f",&r);
    printf("Input term of the loan in days: ");
    scanf("%d",&d);
    printf("The interest amount:$%0.3f",(l*r*d)/365);
    return 0;
}
