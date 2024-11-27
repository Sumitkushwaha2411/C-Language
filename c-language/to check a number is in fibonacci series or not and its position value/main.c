#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c,t;
    printf("enter the number to check in fibonacci series=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=0;
        c=a+b;
        a=b;
        b=c;
        if(n==c)
        {
         t=1;
         break;
        }
    }
    if(t==1)
    {
        printf("%d is present in fibonacci series\npositon value of %d in fibonacci series %d",n,n,i+2);
    }
    else
    {
      printf("%d is not present in fibonacci series",n);  
    }
}
    
    