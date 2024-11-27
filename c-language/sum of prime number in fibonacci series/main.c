#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c,sum=0,s,j;
    printf("enter the number of term in fibonacci series=");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        s=0;
        c=a+b;
        a=b;
        b=c;
        for(j=1;j<=c;j++)
        {
         if(c%j==0)
            {
             s=s+1;
            }
        }
        if(s==2)
        {
            sum=sum+c;
        }
    }
    printf("sum of prime number=%d",sum);
}   
    