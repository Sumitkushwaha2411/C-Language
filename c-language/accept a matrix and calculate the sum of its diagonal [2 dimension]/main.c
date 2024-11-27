#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum,sum1,sum2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element of matrix=");
            scanf("%d",&a[i][j]);
        }
    }
    sum1=0;
    sum2=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
            if(i+j==2)
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    sum=sum1+sum2;
    printf("sum of diagonal of a matrix=%d",sum);
}