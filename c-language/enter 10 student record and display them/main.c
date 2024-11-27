#include<stdio.h>
void main()
{
    int rn[10],coa[10],c[10],dbms[10],tp[10],pr[10],di[10],i,rs;
    for(i=0;i<10;i++)
    {
        printf("enter rollno of %d student=",i+1);
        scanf("%d",&rn[i]);
        printf("enter coa marks of student=");
        scanf("%d",&coa[i]);
        printf("enter c language marks of student=");
        scanf("%d",&c[i]);
        printf("enter dbms marks of student=");
        scanf("%d",&dbms[i]);
        tp[i]=coa[i]+dbms[i]+c[i];
        pr[i]=tp[i]*100/300;
    }
    for(i=0;i<10;i++)
    {
        tp[i]=coa[i]+c[i]+dbms[i];
        pr[i]=tp[i]*100/300;
        if(pr[i]>80)
        {
            di[i]=1;
        }
        else if(pr[i]<=80 && pr[i]>60)
        {
            di[i]=2;
        }
        else if(pr[i]<=60 && pr[i]>40)
        {
            di[i]=3;
        }
        else
        {
            di[i]=4;
        }
    }
    printf("rollno\tcoa marks\tc language\tdbms\ttotal marks\tpercentage\tdivision");
    for(i=0;i<10;i++)
    {
      printf("\n%d\t%d\t\t%d\t\t%d\t%d\t\t%d\t\t%d\t",rn[i],coa[i],c[i],dbms[i],tp[i],pr[i],di[i]);
    }
}

