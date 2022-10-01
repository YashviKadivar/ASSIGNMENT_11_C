/* Write a program in C to find the square of any number using the function.    */

#include<stdio.h>

int square_number(int);

int main()
{
    printf("%d",square_number(12));

    return 0;
}

int square_number(int x)
{
    return x*x;
}


