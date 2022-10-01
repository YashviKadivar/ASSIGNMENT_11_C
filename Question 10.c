/* Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
    function.   */

#include<stdio.h>

int factorial(int);

int main()
{
    int sum=0,i;

    for(i=1;i<=5;i++)
    {
        sum=sum+(factorial(i)/i);
    }
    printf("\n %d",sum);

    return 0;
}

int factorial(int x)
{
    int i,fact=1;

    for(i=x;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}
