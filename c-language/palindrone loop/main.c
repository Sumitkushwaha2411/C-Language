#include<stdio.h>
void main()
{
    int i,j,sum,r,n;
    for(i=1;i<=100;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        if(sum==i)
        {
            printf("\n%d is a palindrone",i);
        }
        else
        {
            printf("\n%d is not a palindrone",i);
        }
    }
}