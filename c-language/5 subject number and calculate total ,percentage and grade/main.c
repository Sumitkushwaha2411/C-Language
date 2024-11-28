#include<stdio.h>
void main()
{
    int a,b,c,d,e,t,p;
    char g;
    printf("enter the c language marks=");
    scanf("%d",&a);
    printf("enter the coa marks=");
    scanf("%d",&b);
    printf("enter the maths marks=");
    scanf("%d",&c);
    printf("enter the mcp marks=");
    scanf("%d",&d);
    printf("enter the dbms marks=");
    scanf("%d",&e); 
    t=a+b+c+d+e;
    p=t*100/500;
    if(p>60)
    {
        g='A';
    }
    else if(p<=60 && p>45)
    {
        g='B';
    }
    else if(p<=45 && p>33)
    {
        g='C';
    }
    else
    {
        g='F';
    }
    printf("c-language\tcoa \tmaths\tmcp \tdbms\ttotal\tpercentage\tgrade");
    printf("\n%d\t\t%d\t%d\t%d\t%d\t%d\t%d\t\t%c\t",a,b,c,d,e,t,p,g);
}
