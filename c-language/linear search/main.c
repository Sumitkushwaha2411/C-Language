#include<stdio.h>
void main()
{
    int a[10],i,s,t;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nenter the value to search=");
    scanf("%d",&s);
    for(i=0;i<10;i++)
    {
        if(s==a[i])
        {
            t=1;
        }
    }
    if(t==1)
    {
        printf("\nfind successfull");
    }
    else
    {
        printf("\nnot find");
    }
}