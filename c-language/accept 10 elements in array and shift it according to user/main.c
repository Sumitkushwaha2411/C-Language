#include<stdio.h>
void main()
{
    int i,a[10],n,j,t;
    printf("enter the number of shift=");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[9];
        for(j=9;j>=0;j--)
        {
            if(j-1>=0)
            {
                a[j]=a[j-1];
            }
        }
        a[0]=t;
    }
    for(i=0;i<10;i++)
    {
        printf("%d,",a[i]);
    }
}
    
   
