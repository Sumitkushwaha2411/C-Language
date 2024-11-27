#include<stdio.h>
void main()
{
    int a[10],i,ch,s;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array=",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n1 for linear search\n2 for binary search\n");
    printf("\nenter your choice=");
    scanf("%d",&ch);
    printf("enter the element to search=");
    scanf("%d",&s);
    switch(ch)
    {
        case 1:
        int t=0;
        for(i=0;i<10;i++)
        {
            if(s==a[i])
            {
                t=1;
                break;
            }
        }
        if(t==1)
        {
          printf("%d is successfully found",s);  
        }
        else 
        {
            printf("%d is not found",s);
        }
        break;
    case 2:
    int lb=0,ub=9,m,f=0;
    while(lb<=ub)
    {
        m=(lb+ub)/2;
        if(s>a[m])
        {
            lb=m+1;
        }
        else if(s<a[m])
        {
            ub=m-1;
        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("\n%d is successfully found",s);
    }
    else
    {
        printf("%d is not found",s);
    }
    break;
    default:
    printf("invalid input");
    }
}