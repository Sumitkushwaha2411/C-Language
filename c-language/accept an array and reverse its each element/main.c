#include<stdio.h>
void main()
{
    int a[2],b[2],i,j,r,s;
    for(i=0;i<2;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
    {
        s=0;
        r=a[i];
        while(r>0)
        {
            j=r%10;
            s=s*10+j;
            r=r/10;
        }
        b[i]=s;
    }
    printf("old array\tnew array after reverse\t");
    for(i=0;i<2;i++)
    {
        printf("\n%d\t\t%d",a[i],b[i]);
    }
}
