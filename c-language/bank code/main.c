#include<stdio.h>
char name[30];
long int acc;
float a;
void open()
{
    puts("enter the account holder name :");
    gets(name);
    printf("enter the ten digit account number :");
    scanf("%ld",&acc);
    printf("enter the initial amount :");
    scanf("%f",&a);
    puts("\naccount holder name :");
    puts(name);
    printf("account number :%ld",acc);
    printf("\ntotal amount : %f\n",a);
}
float ta;
void debit()
{
    long int dac;
    float da;
    printf("enter the account number :");
    scanf("%ld",&dac);
    printf("enter the amount to be debited :");
    scanf("%f",&da);
    if(acc==dac)
    {
        if(a>da)
        {
            ta=a-da;
            printf("\naccount number\t\tdebited amount\t\ttotal amount\n");
            printf("%ld\t\t%f\t\t%f\n",acc,da,ta);
        }
        else
        {
            printf("insufficient amount\n");
        }
    }
    else
    {
        printf("account mismatched\n");
    }
}
void credit()
{
    long int cac;
    float ca,tac;
    printf("enter the account number :");
    scanf("%ld",&cac);
    printf("enter the amount to be credited :");
    scanf("%f",&ca);
    if(acc==cac)
    {
        tac=ta+ca;
        printf("\naccount number\t\tcredited amount\t\ttotal amount\n");
        printf("%ld\t\t%f\t\t%f\n",acc,ca,tac);
    }
    else
    {
        printf("account mismatched");
    }
}
void main()
{
    int ch=1;
    while(ch!=0)
    {
        printf("\npress 1 for open account\npress 2 for debit account\npress 3 for credit account\npress 0 for stop");
        printf("\nenter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0:
            printf("thanks for visiting");
            break;
            case 1:
            open();
            break;
            case 2:
            debit();
            break;
            case 3:
            credit();
            break;
            default:
            printf("invalid input");
            break;
        }
    }
}
