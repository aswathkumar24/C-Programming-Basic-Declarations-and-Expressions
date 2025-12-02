/******************************************************************************

Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
Test Data :
Input a number between 1 to 12 to get the month name: 8
Expected Output:
August

*******************************************************************************/
#include <stdio.h>      //Program 25

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            printf("Jan");
            break;
        }
        case 2:
        {
            printf("Feb");
            break;
        }
        case 3:
        {
            printf("Mar");
            break;
        }
        case 4:
        {
            printf("Apr");
            break;
        }
        case 5:
        {
            printf("May");
            break;
        }
        case 6:
        {
            printf("Jun");
            break;
        }
        case 7:
        {
            printf("Jul");
            break;
        }
        case 8:
        {
            printf("Aug");
            break;
        }
        case 9:
        {
            printf("Sept");
            break;
        }
        case 10:
        {
            printf("Oct");
            break;
        }
        case 11:
        {
            printf("Nov");
            break;
        }
        case 12:
        {
            printf("Dec");
            break;
        }
        default:
        {
            printf("check num");
            break;
        }
    }
}
