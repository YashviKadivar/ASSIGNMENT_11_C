/* Write a function to print first N prime numbers (TSRN)   */

#include<stdio.h>

void prime_number(int);

int main()
{
    prime_number(20);

    return 0;
}

void prime_number(int x)
{
    int flag,i,n;

    for(i=2;i<=x;i++)
    {
        flag=0;

        for(n=2;n<i;n++)
        {
            if(i%n==0)
                flag=1;
        }

        if(flag==0)
            printf("\n %d",i);
    }
}
