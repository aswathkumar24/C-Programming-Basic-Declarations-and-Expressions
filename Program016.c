/******************************************************************************

Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00

*******************************************************************************/
#include <stdio.h>

int main()
{
    int amount;
    printf("Input the amount: ");
    scanf("%d",&amount);
    printf("\nThere are: \n");
    printf("%d Note(s) of 100.00",amount/100);
    printf("\n%d Note(s) of 50.00",(amount%100)/50);
    printf("\n%d Note(s) of 20.00",((amount%100)%50)/20);
    printf("\n%d Note(s) of 10.00",(((amount%100)%50)%20)/10);
    printf("\n%d Note(s) of 5.00",((((amount%100)%50)%20)%10)/5);
    printf("\n%d Note(s) of 2.00",(((((amount%100)%50)%20)%10)%5)/2);
    printf("\n%d Note(s) of 1.00",(((((amount%100)%50)%20)%10)%5)%2);
    return 0;
}
