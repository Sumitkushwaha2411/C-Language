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
    for(i=0;i<b1;i++)
    {
        c=0;
        for(j=0;j<10;j++)
        {
            if(b[i]==a[j])
            {
                c++;
            }
        }
        printf("%d elemnt present %d times\n",b[i],c);
    }
}