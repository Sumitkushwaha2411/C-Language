#include<stdio.h>
void main()
{
    int n,a=0,b=1,c,i;
    printf("enter the number of term u want in a series=");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}