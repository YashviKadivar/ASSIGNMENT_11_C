/* Write a function to calculate HCF of two numbers. (TSRS) */

#include<stdio.h>

int hcf(int,int);

int main()
{
    int x,y;

    printf("\n enter two numbers->");
    scanf("%d%d",&x,&y);

    printf("\n HCF is = %d",hcf(x,y));

    return 0;
}

int hcf(int a,int b)
{
    int n;

    for(n=(a<b) ? a:b ; n>=1 ; n--)
   {
       if(a%n==0 && b%n==0)
       {
        break;
       }
   }

   return n;

}
