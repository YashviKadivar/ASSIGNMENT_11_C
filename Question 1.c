/* Write a function to calculate LCM of two numbers. (TSRS) */

#include<stdio.h>

int lcm(int,int);

int main()
{
    int x,y;

    printf("\n enter two numbers->");
    scanf("%d%d",&x,&y);

    printf("\n lcm is = %d",lcm(x,y));

    return 0;
}

int lcm(int a,int b)
{
    int i;

    for(i=1;i<=a*b;i++)
   {
       if(i%a==0 && i%b==0)
       {
        break;
       }
   }

   return i;
}
