#include<stdio.h>
void main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
       printf("enter %d number in array=",i+1);
       scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}