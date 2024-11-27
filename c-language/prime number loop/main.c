#include<stdio.h>
void main()
{
    int i,j,c;
    for(i=1;i<=100;i++)
    {
        c=0;
        for(j=1;j<=100;j++)
        {
            if(i%j==0)
            {
                c=c+1;    
                
            }
        }
        if(c==2)
        {
            printf("%d is a prime number\n",i);
        }
        else
        {
            printf("%d is not a prime number\n",i);
        }
    }
}
