/******************************************************************************

Write a C program to read a password until it is valid. For wrong password print "Incorrect password" 
and for correct password print, "Correct password" and quit the program. The correct password is 1234.
Test Data :
Input the password: 1234
Expected Output:
Correct password

*******************************************************************************/
#include <stdio.h>      //Program 36

int password(long p)
{
    if(p==1234)
        return 1;
    else 
        return 0;
}

int main()
{
    long a;
    int j;
    printf("Input the password: ");
    scanf("%ld",&a);
    j = password(a);
    if(j == 1)
        printf("Correct Password");
    else 
        printf("Wrong Passwod");
}
