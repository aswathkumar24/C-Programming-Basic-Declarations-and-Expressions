/******************************************************************************
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3

*******************************************************************************/
#include <stdio.h>  //Program 8

int main()
{
    int days,week,year,act;
    printf("Enter days : ");
    scanf("%d",&act);
    printf("\nYears : %d",act/365);
    printf("\nWeeks : %d",(act%365)/7);
    printf("\nDays : %d",((act%365)%7));
    return 0;
}
