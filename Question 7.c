/* Write a function to print first N terms of Fibonacci series (TSRN)   */

#include<stdio.h>

void fibonacci(int);

int main()
{
    fibonacci(10);

    return 0;
}

void fibonacci(int x)
{
    int a=-1,b=+1,c=0;

    while(x)
    {
        c=a+b;
        printf("\n %d",c);
        a=b;
        b=c;
        x--;
    }
}
