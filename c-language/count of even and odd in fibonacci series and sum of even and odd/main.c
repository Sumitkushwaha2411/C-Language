#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c,e=0,o=0,ev=0,od=1;
    printf("enter the number to be in fibonacci series=");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==0)
        {
            e=e+1;
            ev=ev+c;
        }
         else
         {
            o=o+1;
            od=od+c;
        }
    }
    printf("even=%d\nodd=%d\nsum of even=%d\nsum of odd=%d\n",e,o,ev,od);
    
}

