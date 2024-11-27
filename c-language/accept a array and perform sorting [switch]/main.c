#include<stdio.h>
void main()
{
    int a[10],i,ch,j,t,minind;
    for(i=0;i<10;i++)
    {
        printf("enter the %d element in array =",i+1);
        scanf("%d",&a[i]);
    }
    while(ch!=3)
    {
        printf("\npress 1 for bubble sort\npress 2 for selection sort\npress 3 for stop");
        printf("\nenter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
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
        for(i=0;i<10;i++)
        {
            printf("%d,",a[i]);
        }
        break;
        case 2:
        for(i=0;i<10;i++)
        {
            for(j=i;j<10;j++)
            {
                minind=i;
                if(a[minind]>a[j])
                {
                    minind=j;
                }
            }
            t=a[i];
            a[i]=a[minind];
            a[minind]=t;
        }
        for(i=0;i<10;i++)
        {
            printf("%d,",a[i]);
        }
        break;
        case 3:
        printf("thanks for visiting");
        break;
        default:
        printf("invalid input");
        }
    }
}
