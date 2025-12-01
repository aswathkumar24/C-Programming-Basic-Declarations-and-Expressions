/******************************************************************************

Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000

*******************************************************************************/
#include <stdio.h>      //Program 14

int main()
{
    double km,lit;
    printf("Input total distance in km: ");
    scanf("%lf",&km);
    printf("Input total fuel spent in liters: ");
    scanf("%lf",&lit);
    printf("Average consumption (km/lt) : %0.3lf", km/lit);
    
    return 0;
}
