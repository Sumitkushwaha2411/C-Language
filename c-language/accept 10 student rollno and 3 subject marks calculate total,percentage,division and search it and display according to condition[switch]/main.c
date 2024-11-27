#include<stdio.h>
void main()
{
    int r[10],coa[10],c[10],dbms[10],i,t[10],p[10],d[10],ch,s,e;
    printf("WELCOME TO THE UNIVERSITY MARKS SYSTEM\n");
    for(i=0;i<10;i++)
    {
        printf("enter the %d student detail\n",i+1);
        printf("enter the rollno=");
        scanf("%d",&r[i]);
        printf("enter the c-language marks=");
        scanf("%d",&c[i]);
        printf("enter the computer organization and architechure marks=");
        scanf("%d",&coa[i]);
        printf("enter the database management system marks=");
        scanf("%d",&dbms[i]);
    }
    for(i=0;i<10;i++)
    {
        t[i]=c[i]+coa[i]+dbms[i];
        p[i]=t[i]*100/300;
        if(p[i]>80)
        {
            d[i]=1;
        }
        else if(p[i]<=80 && p[i]>40)
        {
            d[i]=2;
        }
        else
        {
            d[i]=3;
        }
    }
    while(ch!=6)
    {
        printf("\npress 1 for search the detail of student asked by the user\npress 2 for all student detail\npress 3 for student detail on 1 division\npress 4 for student detail on 2 division\npress 5 for student detail on 3 division\npress 6 for stop\n");
        printf("\nenter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
        e=0;
        printf("\nenter the rollno to search=");
        scanf("%d",&s);
        for(i=0;i<10;i++)
        {
            if(s==r[i])
            {
                e=1;
                break;
            }
        }
        if(e==1)
        {
            printf("\nrollno\t\tc marks\t\tcoa marks\tdbms marks\ttotal marks\tpercentage\tdivision\t");
            printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t",r[i],c[i],coa[i],dbms[i],t[i],p[i],d[i]);
        }
        break;
        case 2:
        printf("\nrollno\t\tc marks\t\tcoa marks\tdbms marks\ttotal marks\tpercentage\tdivision\t");
        for(i=0;i<10;i++)
        {
            printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t",r[i],c[i],coa[i],dbms[i],t[i],p[i],d[i]);   
        }
        break;
        case 3:
        printf("\nrollno\t\tc marks\t\tcoa marks\tdbms marks\ttotal marks\tpercentage\tdivision\t");
        for(i=0;i<10;i++)
        {
            if(d[i]==1)
            {
                
                printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t",r[i],c[i],coa[i],dbms[i],t[i],p[i],d[i]);   
            }
        }
        break;
        case 4:
        printf("\nrollno\t\tc marks\t\tcoa marks\tdbms marks\ttotal marks\tpercentage\tdivision\t");
        for(i=0;i<10;i++)
        {
            if(d[i]==2)
            {
                
                printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t",r[i],c[i],coa[i],dbms[i],t[i],p[i],d[i]);   
            }
        }
        break;
        case 5:
        printf("\nrollno\t\tc marks\t\tcoa marks\tdbms marks\ttotal marks\tpercentage\tdivision\t");
        for(i=0;i<10;i++)
        {
            if(d[i]==3)
            {
                
                printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t",r[i],c[i],coa[i],dbms[i],t[i],p[i],d[i]);   
            }
        }
        break;
        case 6:
        printf("thanks for visting");
        break;
        default:
        printf("invalid input");
        }
    }
}


