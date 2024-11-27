#include<stdio.h>
#include<stdlib.h>
int size=4,top=-1;
int k[4];
void push()
{
    if(top>=size-1)
    {
        printf("\nstack is overflow");
    }
    else
    {
        int x;
        printf("\nenter the element in stack : ");
        scanf("%d",&x);
        top=top+1;
        k[top]=x;
        printf("\nelement inserted successfully");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nstack is underflow");
    }
    else
    {
        printf("\nstack data delete %d",k[top]);
        top=top-1;
    }
}
void main()
{
    int c=1;
    while(c!=0)
    {
        printf("\npress 1 for push\npress 2 for pop\npress 0 for exit");
        printf("\nenter your choice :");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 0:
            break;
            default:
            printf("\ninvalid input");
            break;
        }
    }
}
