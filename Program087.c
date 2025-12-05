/******************************************************************************

Write a C program to display the minimum and maximum values for each of C's data types.
Sample Output:
C Programming Course

Ranges for integer data types in C

------------------------------------------------------------
int8_t                    -128                   127
int16_t                 -32768                 32767
int32_t            -2147483648            2147483647
int64_t   -9223372036854775808   9223372036854775807
uint8_t                      0                   255
uint16_t                     0                 65535
uint32_t                     0            4294967295
uint64_t                     0  18446744073709551615

============================================================

Ranges for real number data types in C

------------------------------------------------------------
float          1.175494e-38    3.402823e+38
double        2.225074e-308   1.797693e+308
long double  3.362103e-4932  1.189731e+4932

*******************************************************************************/
#include <stdio.h>          //Program 87
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int8_t\t\t%d\t\t\t\t%d\n",SCHAR_MIN,SCHAR_MAX);
    printf("int16_t\t\t%d\t\t\t\t%d\n",SHRT_MIN,SHRT_MAX);
    printf("int32_t\t\t%d\t\t\t%d\n",INT_MIN,INT_MAX);
    printf("int64_t\t\t%lld\t\t%lldd\n",LLONG_MIN,LLONG_MAX);
    printf("uint8_t\t\t%d\t\t\t\t%d\n",0,UCHAR_MAX);
    printf("uint16_t\t%d\t\t\t\t%d\n",0,USHRT_MAX);
    printf("uint32_t\t%d\t\t\t\t%lld\n",0,UINT_MAX);
    printf("uint64_t\t%d\t\t\t\t%llu\n",0,ULLONG_MAX);
    
    
    printf("float\t\t%g\t\t\t%g\n",FLT_MIN,FLT_MAX);
    printf("double\t\t%g\t\t\t%g\n",DBL_MIN,DBL_MAX);
    printf("long double\t%Lg\t\t\t%Lg\n",LDBL_MIN,LDBL_MAX);
    

    return 0;
}
