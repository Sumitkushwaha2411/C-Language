#include<stdio.h>
int pal(int a)
{
    int n,r,sum=0;
    n=a;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(a==sum)
    {
        printf("%d is a palindrone number",sum);
    }
    else
    {
        printf("%d is not a palindrone number",sum);
    }
}
void main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);
    pal(x);
}
