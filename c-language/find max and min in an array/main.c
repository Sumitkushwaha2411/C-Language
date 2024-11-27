#include<stdio.h>
void main()
{
    int a[10],i,max,min;
    for(i=0;i<=9;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<=9;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("max=%d\nmin=%d",max,min);
}