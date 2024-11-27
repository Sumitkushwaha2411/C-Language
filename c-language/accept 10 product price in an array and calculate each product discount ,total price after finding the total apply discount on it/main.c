#include<stdio.h>
void main()
{
    int p[10],i;
    float ppd[10],ppa[10],pd[10],tp=0,dis,pa;
    for(i=0;i<10;i++)
    {
        printf("enter the %d product price in an array=",i+1);
        scanf("%d",&p[i]);
    }
    for(i=0;i<10;i++)
    {
        if(p[i]<500)
        {
            ppd[i]=p[i]*5/100;
            ppa[i]=p[i]-ppd[i];
        }
        else if(p[i]>500 && p[i]<=2000)
        {
            ppd[i]=p[i]*7/100;
            ppa[i]=p[i]-ppd[i];
        }
        else
        {
            ppd[i]=p[i]*10/100;
            ppa[i]=p[i]-ppd[i];
        }
    }
    for(i=0;i<10;i++)
    {
        tp=tp+ppa[i];
    }
    if(tp<=500)
    {
        dis=tp*5/100;
    }
    else if(tp>500 && tp<=2000)
    {
        dis=tp*7/100;
    }
    else
    {
        dis=tp*10/100;
    }
    pa=tp-dis;
    printf("\nproduct price\t\tdiscount amount of per product\t\tamount after per product discount\t");
    for(i=0;i<10;i++)
    {
        printf("\n%d\t\t\t%f\t\t\t\t%f\t",p[i],ppd[i],ppa[i]);
    }
    printf("\n\ntotal price after per product discount=%f\n\ndiscount after total price=%f\n\npayable amount after all discont=%f\n",tp,dis,pa);
}

