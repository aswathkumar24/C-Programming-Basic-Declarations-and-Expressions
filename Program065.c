/******************************************************************************

Write a C program that prints out the prime numbers between 1 and 200. 
The output should be such that each row contains a maximum of 20 prime numbers.
Expected output:
The prime numbers between 1 and 199 are:
2 3 5 7 11 13 17 19 23 29
31 37 41 43 47 53 59 61 67 71
73 79 83 89 97 101 103 107 109 113
127 131 137 139 149 151 157 163 167 173
179 181 191 193 197

*******************************************************************************/
#include <stdio.h>      //Program 65
void prime(void)
{
    int flag,count;
    count=0;
    for(int i=2;i<200;i++)
    {
        flag=0;
        
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag==2)
        {   
            printf("%d\t",i);
            count++;
            if(count==10)
            {
                count=0;
                printf("\n");
            }
        }
            
    }
        
    
}

int main()
{
    prime();

    return 0;
}
