#include<stdio.h>
void main()
{
    int a[10],i,lb,ub,m,s,t;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the element to search=");
    scanf("%d",&s);
    lb=0;
    ub=9;
    t=0;
    while(lb<=ub)
    {
      m=lb+ub/2;
      if(s>a[m])
      {
          lb=m+1;
      }
      else if(s<a[m])
      {
          ub=m-1;
      }
      else
      {
          t=1;
          break;
      }
    }
    if(t==1)
    {
        printf("successfully found");
    }
    else
    {
        printf("not found");
    }
}