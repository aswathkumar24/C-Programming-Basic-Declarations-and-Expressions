/******************************************************************************

Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sec;
    printf("Input seconds: ");
    scanf("%d",&sec);
    
    printf("H:M:S - %d:%d:%d",((sec/60)/60),(sec/60)%60,(sec%60));

    return 0;
}
