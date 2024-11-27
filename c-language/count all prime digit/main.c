#include<stdio.h>
void main()
{
    int n,r,c,n1,tc=0,i;
    printf("enter the number=");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        c=0;
        r=n%10;
        n=n/10;
        for(i=1;i<=n1;i++)
        {
            if(r%i==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            tc=tc+1;
            printf("\nprime digit=%d",r);
        }
    }
    printf("\ncount of all prime digits=%d",tc);
}