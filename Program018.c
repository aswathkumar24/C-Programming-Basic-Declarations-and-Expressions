/******************************************************************************

Write a C program to convert a given integer (in days) to years, months and days, 
assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int days;
    printf("Input no. of days: ");
    scanf("%d",&days);
    printf("%d Year(s)\n%d Month(s)\n%d Day(s)",(days/365),((days%365)/30),(days%30));

    return 0;
}
