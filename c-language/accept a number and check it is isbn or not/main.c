#include<stdio.h>
void main()
{
    long int n,n1,c=0,i=10,sum=0,r;
    printf("enter the number : ");
    scanf("%ld",&n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*i;
        i--;
        c++;
        n=n/10;
    }
    if(c==10)
    {
        if(sum%11==0)
        {
            printf("it is an isbn number");
        }
    }
    else
    {
        printf("it is not a isbn number");
    }
}