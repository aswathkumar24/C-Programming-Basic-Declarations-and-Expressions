/******************************************************************************

Write a C program to print a table of all the Roman numeral equivalents of decimal numbers in the range 1 to 100.
Sample Output:

Decimal  Roman
number   numeral
-------------------
1        I
2        II
3        III
4        IV
.....
98        LXXXXVIII
99        LXXXXIX
100        C

*******************************************************************************/
#include <stdio.h>      //Program 85

void print(void)
{
    int a;
    for(int i=1;i<=100;i++)
    {
        a=i;
        printf("%d\t",a);
        if(a==100)
        {
            printf("C");
            a=0;
        }
        while(a>=50)
        {
            printf("L");
            a = a-50;
        }
        while(a>=10)
        {
            printf("X");
            a=a-10;
        }
        while(a>=5)
        {
            if(a%10==9)
            {
                printf("IX");
                a=a-9;
            }
            else
                printf("V");
                a=a-5;
        }
        while(a>0) 
        {
            if(a%10==4) 
            {
                printf("IV");
                a = a-4; 
            }
            else 
            {
                printf("I"); 
                a =a-1; 
            }
        }
        printf("\n"); 
    }
        
    
}
    


int main()
{
   print();
   return 0;
}
