//wap to accept in array and find nth maximumm element//
#include<stdio.h>
void main()
{
    int a[10],i,t,j,s;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-1-i;j++)
        {
           if(a[j]>a[j+1])
           {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
           }
        }
    }
    printf("enter the index number to search=");
    scanf("%d",&s);
    printf("%d",a[10-s]);
}
