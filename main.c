#include <stdio.h>
#include <stdlib.h>

void main()
{
    int sn, en, i, j;
    int sum=0;

    printf("enter the starting range \n");
    scanf(" %d", &sn);

    printf("enter the ending range \n");
    scanf(" %d", &en);

    for (i=sn; i<=en; i++)
    {
        for (j=2; j<i; j++)
        {
            if (i%j == 0)

                break;
        }

        if (i==j)
        {
            sum+=i;
            printf(" %d is a prime number. \n", i);
            
        }
    }
    
    printf(" %d is the sum of these prime numbers. \n", sum);
}
//made by @GamerBoy2K - Github + XDA
