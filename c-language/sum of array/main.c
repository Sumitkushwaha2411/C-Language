#include<stdio.h>
void main()
{
    int a[10],i,sum=0;
    for(i=0;i<=9;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array=%d",sum);
}
