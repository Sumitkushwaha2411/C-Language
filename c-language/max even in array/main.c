#include<stdio.h>
void main()
{
    int a[10],i,max;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            max=a[i];
        }
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        
    }
    printf("max even number in array=%d",max);
}