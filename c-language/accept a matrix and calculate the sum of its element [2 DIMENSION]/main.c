#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element in matrix=");
            scanf("%d",&a[i][j]);
        }
    }
    sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==0||i==1||i==2)
           {
               sum=sum+a[i][j];
           }
        }
    }
    printf("\nsum of matrix element  = %d",sum);
}

    