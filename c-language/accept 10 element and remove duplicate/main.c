#include<stdio.h>
void main()
{
    int a[10],i,j,b[10],c,b1=0;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        c=0;
        for(j=0;j<10;j++)
        {
           if(a[i]==b[j])
           {
               c=1;
           }
        }
        if(c==0)
        {
            b[b1]=a[i];
            b1++;
        }
    }
    printf("old array\n");
    for(i=0;i<10;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\nnew array\n");
    for(i=0;i<b1;i++)
    {
        printf("%d,",b[i]);
    }
}

