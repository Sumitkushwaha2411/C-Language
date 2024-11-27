#include<stdio.h>
void main()
{
    int i,n,sum,r;
    for(i=1;i<=100;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(sum==i)
        {
            printf("\n%d is a armstrong",i);
        }
        else
        {
            printf("\n%d is not a armstrong",i);
        }
    }
}