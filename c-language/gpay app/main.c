#include<stdio.h>
long int ac[2],pn[2];
int pin[2],i,lp;
float amt[2];
void signup()
{
    printf("\n\nSIGNUP INTERFACE :");
    for(i=0;i<2;i++)
    {
        printf("\nenter the %d account number : ",i+1);
        scanf("%ld",&ac[i]);
        printf("\nenter the %d account 4 digit  pin : ",i+1);
        scanf("%d",&pin[i]);
        printf("\nenter the %d account amount : ",i+1);
        scanf("%f",&amt[i]);
        printf("\nenter the %d account phone number : \n\n",i+1);
        scanf("%ld",&pn[i]);
    }
    printf("enter the lock code : ");
    scanf("%d",&lp);
}
void login()
{
    int llp,t=1;
    printf("\n\nLOGIN INTERFACE :");
    while(t>0)
    {
        printf("enter the lock code : ");
        scanf("%d",&llp);  
        if(lp==llp)
        {
            printf("LOGIN SUCCESSFULLY\n\n");
            t=0;
        }
        else
        {
            printf("INVALID LOCK CODE");
        }
    }
}
void profile()
{
    printf("\n\nPROFILE INTERFACE");
    printf("NAME : SUMIT KUSHWAHA\nNUMBER OF ACCOUNT : 2");
    for(i=0;i<2;i++)
    {
        printf("%dACCOUNT NUMBER : \n",i+1);
        printf("-%ld\n",ac[i]);
        printf("%dPHONE NUMBER : \n",i+1);
        printf("-%ld\n\n",pn[i]);
    }
    printf("EMAIL :sumitkushwaha2411003@gmail.com\nhdfcbank\nLANGUAGE :\nENGLISH\n");
}
void dashboard()
{
    printf("\n\nDASHBOARD INTERFACE :");
    printf("\n\nUPI-ID : sumitkushwaha2411003@hdfc ");
}
void paycontact()
{
    printf("\n\nPAY TO CONTACT INTERFACE : ");
    long int n[10]={1111111111,2222222222,3333333333,4444444444,5555555555,6666666666,7777777777,8888888888,9999999999,0000000000},sc;
    int sa,ap; 
    float pamt;
    for(i=0;i<10;i++)
    {
        printf("%d. %ld\n",i+1,n[i]);
    }
    printf("enter the contact number to pay : ");
    scanf("%ld",&sc);
    printf("enter the amount to pay : ");
    scanf("%f",&pamt);
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        printf("enter the pin : ");
        scanf("%d",&ap);
        if(ap==pin[0])
        {
            if(amt[0]>pamt)
            {
                amt[0]=amt[0]-pamt;
                printf("PAYMENT SUCCESSFULL");
            }
            else
            {
                printf("INSUFFICIENT amount");
            }  
            }
        else
        {
            printf("PIN MISMATCH");
        }
        break;
        case 2:
        printf("enter the pin : ");
        scanf("%d",&ap);
        if(ap==pin[1])
        {
            if(amt[1]>pamt)
            {
                amt[1]=amt[1]-pamt;
                printf("PAYMENT SUCCESSFULL");
            }
            else
            {
                printf("INSUFFICIENT amount");
            }  
        }
        else
        {
            printf("PIN MISMATCH");
        }
        break;
        default :
        printf("invalid input");
    }
}    
void paynumber()
{
    long int n;
    float pamt;
    int sa,ap,t=1;
    printf("\n\nPAY TO NUMBER INTERFACE : \n\n");
    printf("enter the phone number : ");
    scanf("%ld",&n);
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[0])
            {
                t=0;
                if(amt[0]>pamt)
                {
                    amt[0]=amt[0]-pamt;
                    printf("PAYMENT SUCCESSFULL");
                }
            else
            {
                printf("INSUFFICIENT amount");
            }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[1])
            {
                t=0;
                if(amt[1]>pamt)
                {
                    amt[1]=amt[1]-pamt;
                    printf("PAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        default :
        printf("invalid input");
    }
}
void banktransfer()
{
    long int acc,racc,ifsc;
    float pamt;
    int ap,sa,t=1;
    printf("\n\nBANK TRANSFER INTERFACE");
    printf("enter the account number : ");
    scanf("%ld",&acc);
    printf("re-enter the account number : ");
    scanf("%ld",&racc);
    printf("enter the ifsc code : ");
    scanf("%ld",&ifsc);
    printf("enter the amount : ");
    scanf("%f",&pamt);
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[0])
            {
                t=0;
                if(amt[0]>pamt)
                {
                    amt[0]=amt[0]-pamt;
                    printf("PAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[1])
            {
                t=0;
                if(amt[1]>pamt)
                {
                    amt[1]=amt[1]-pamt;
                    printf("PAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        default:
        printf("invalid input");
    }
}
void upiid()
{
    long int upi;
    float pamt;
    printf("\n\nUPI ID TRANSFER");
    printf("enter the upi-id : ");
    scanf("%ld",&upi);
    printf("enter the amount :");
    scanf("%f",&pamt);
    int ap,sa,t=1;
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[0])
            {
                t=0;
                if(amt[0]>pamt)
                {
                    amt[0]=amt[0]-pamt;
                    printf("PAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[1])
            {
                t=0;
                if(amt[1]>pamt)
                {
                    amt[1]=amt[1]-pamt;
                    printf("PAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        default:
        printf("invalid input");
    }
}
void selftransfer()
{
    int d,c,t=1,p;
    float a;
    printf("SELF TRANSFER INTERFACE");
    printf("select account to be debited");
    printf("press 1 for %ld\npress 2 for %ld",ac[0],ac[1]);
    printf("\nenter your choice : ");
    scanf("%d",&d);
    printf("select account to be credited");
    printf("press 1 for %ld\npress 2 for %ld",ac[0],ac[1]);
    printf("\nenter your choice : ");
    scanf("%d",&c);
    printf("enter the amount to be tranferred : ");
    scanf("%f",&a);
    switch(d)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&p);
            if(p==pin[0])
            {
                if(amt[0]>a)
                {
                    amt[1]=amt[1]+a;
                    t=0;
                    printf("\ntransferred successfully");
                }
                else
                {
                    printf("\ninsufficient amount");   
                }
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&p);
            if(p==pin[1])
            {
                if(amt[1]>a)
                {
                    amt[0]=amt[0]+a;
                    t=0;
                    printf("\ntransferred successfully");
                }
                else
                {
                    printf("\ninsufficient amount");   
                }
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        default:
        printf("invalid input");
    }
}
void checkbalance()
{
    int ch,t=1,p;
    printf("\n\nCHECK BALANCE INTERFACE");
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("enter your choice : ");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin :");
            scanf("%d",&p);
            if(p==pin[0])
            {
                printf("account number\t\ttotal amount\n");
                printf("%ld\t\t%f",ac[0],amt[0]);
                t=0;
                printf("BALANCE FETCHED SUCCESSFULLY");
            }
            else
            {
                printf("PIN MISMATCHED");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin :");
            scanf("%d",&p);
            if(p==pin[1])
            {
                printf("account number\t\ttotal amount\n");
                printf("%ld\t\t%f",ac[1],amt[1]);
                t=0;
                printf("BALANCE FETCHED SUCCESSFULLY");
            }
            else
            {
                printf("PIN MISMATCHED");
            }
        }
        break;
        default:
        printf("invalid input");
    }
}
void recharge()
{
    long int pn;
    float a;
    int t=1,sa,ap;
    printf("\n\nRECHARGE INTERFACE : ");
    scanf("%ld",&pn);
    printf("enter the phone number :");
    scanf("%ld",&pn);
    printf("enter the recharge amount :");
    scanf("%f",&a);
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[0])
            {
                t=0;
                if(amt[0]>a)
                {
                    amt[0]=amt[0]-a;
                    printf("RECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[1])
            {
                t=0;
                if(amt[1]>a)
                {
                    amt[1]=amt[1]-a;
                    printf("RECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        default:
        printf("invalid input");
    }
}
void dth()
{
    long int d;
    int u,sa,t=1,ap;
    float a;
    printf("DTH RECHARGE :\npress 1 for airtel\npress 2 for videocon\npress 3 for tatasky\n");
    printf("enter your choice : ");
    scanf("%d",&u);
    printf("enter the dtc account number :");
    scanf("%ld",&d);
    printf("enter the amount of recharge : ");
    scanf("%f",&a);
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[0])
            {
                t=0;
                if(amt[0]>a)
                {
                    amt[0]=amt[0]-a;
                    printf(" DTH RECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[1])
            {
                t=0;
                if(amt[1]>a)
                {
                    amt[1]=amt[1]-a;
                    printf("RECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        default:
        printf("invalid input");
    }
}
void electricity()
{
    int f,u,sa,ap,t=1;
    float c;
    printf("\n\nELECTRICITY BILL PAYMENT INTERFACE : ");
    printf("\npress 1 for UPCL\npress 2 for TATA-ELECTRIC\npress 3 for ADANI-ELECTRIC");
    printf("enter your choice : ");
    scanf("%d",&f);
    printf("enter the electricity units : ");
    scanf("%d",&u);
    if(u<=100)
    {
        c=u*6;
    }
    else if(u>100 && u<=300)
    {
        c=600+((u-100)*7);
    }
    else
    {
        c=600+1400+((u-300)*8);
    }
    printf("electricity bill : %f",c);
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[0])
            {
                t=0;
                if(amt[0]>c)
                {
                    amt[0]=amt[0]-c;
                    printf("ELECTRICITY BILL PAID SUCCESSFULL");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        case 2:
        while(t>0)
        {
            printf("enter the pin : ");
            scanf("%d",&ap);
            if(ap==pin[1])
            {
                t=0;
                if(amt[1]>c)
                {
                    amt[1]=amt[1]-c;
                    printf("ELECTRICITY BILL PAID SUCCESSFULLY");
                }
                else
                {
                    printf("INSUFFICIENT amount");
                }  
            }
            else
            {
                printf("PIN MISMATCH");
            }
        }
        break;
        default:
        printf("invalid input");
    }
}
void main()
{
    int h=1;
    while(h!=0)
    {
        printf("press 1 for SIGNUP\npress 2 for LOGIN\npress 3 for PROFILE\npress 4 for DASHBORAD\npress 5 for PAY-CONTACT\npress 6 for PAY-NUMBER\npress 7 for BANK TRANSFER\npress 8 for PAY-UPIID\npress 9 for SELF TRANSFER\npress 10 for CHECK-BALANCE\npress 11 for mobile recharge\npress 12 for DTH RECHARGE\npress 13 for ELECTRICITY BILL PAYMENT\npress 0 TO STOP\n");
        printf("enter your choice");
        printf("%d",&h);
        switch(h)
        {
            case 1:
            signup();
            break;
            case 2:
            login();
            break;
            case 3:
            profile();
            break;
            case 4:
            dashboard();
            break;
            case 5:
            paycontact();
            break;
            case 6:
            paynumber();
            break;
            case 7:
            banktransfer();
            break;
            case 8:
            upiid();
            break;
            case 9:
            selftransfer();
            break;
            case 10:
            checkbalance();
            break;
            case 11:
            recharge();
            break;
            case 12:
            dth();
            break;
            case 13:
            electricity();
            break;
            default:
            printf("invalid input");
        }
    }
    
}
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        



