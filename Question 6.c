/* Write a function to print all Prime numbers between two given numbers. (TSRN)    */

#include<stdio.h>

void prime_between_two_number(int,int);

int main()
{
    prime_between_two_number(10,50);

    return 0;
}

void prime_between_two_number(int x,int y)
{
    int flag,i,n;

    for(i=x;i<=y;i++)
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
