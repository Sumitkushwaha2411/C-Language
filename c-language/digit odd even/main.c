#include<stdio.h>
void main()
{
    int n,r,e=0,o=0;
    printf("enter the number=");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
    }
    printf("even count=%d\n",e);
    printf("odd count=%d",o);
    
}