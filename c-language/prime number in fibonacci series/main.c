#include<stdio.h>
void main()
{
    int a=0,b=1,i=0,j,c,s,p=0;
    while(i<10)
    {
        c=a+b;
        a=b;
        b=c;
        for(j=2;j<=c/2;j++)
        {
            s=0;
            if(c%j==0)
            {
                s=1;
                break;
            }
        }
        if(s==0)
            {
                printf("%d,",c);
                i++;
                p=p+c;
            }
    }
}


