#include<stdio.h>
void main()
{
    int a[10],i,minind,t,j;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        minind=i;
        for(j=i;j<10;j++)
        {
            if(a[minind]>a[j])
            {
                minind=j;
            }
        }
        t=a[i];
        a[i]=a[minind];
        a[minind]=t;
    }
    for(i=0;i<10;i++)
    {
        printf("%d,",a[i]);
    }
}