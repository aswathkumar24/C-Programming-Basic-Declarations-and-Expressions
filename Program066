/******************************************************************************

Write a C program that generates 50 random numbers between -0.5 and 0.5 and writes them to the file rand.dat. 
The first line of ran.dat contains the number of random numbers,
while the next 50 lines contain 50 random numbers.
50
-0.4215
0.2620
0.3065
-0.0485
.... 0.3980
0.1750
0.4780
-0.2915
0.0715
0.3565
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *f;
    char line[200];

    f = fopen("rand.dat","w");
    if (f == NULL) 
    {
        printf("Error in creating output.dat\n");
    }
    srand(time(NULL));
    fprintf(f, "No of random items: 50");
    fprintf(f, "\n");
    for(int i=0;i<50;i++)
    {
        double x = ((double)rand() / RAND_MAX) - 0.5;
        fprintf(f,"%0.4lf\n",x);
    }
    
    fclose(f);
    return 0;
}
