#include<stdio.h>
long int ac[2],pn[2];
int pin[2],i,lp;
float amt[2];
void signup()
{
    printf("\n\nSIGNUP INTERFACE :");
    for(i=0;i<2;i++)
    {
        printf("\n\nINSERT %d ACCOUNT DETAIL:\n",i+1);
        printf("\nenter the account number : ");
        scanf("%ld",&ac[i]);
        printf("enter the account 4 digit  pin : ");
        scanf("%d",&pin[i]);
        printf("enter the account amount : ");
        scanf("%f",&amt[i]);
        printf("enter the account phone number : ");
        scanf("%ld",&pn[i]);
    }
    printf("\n\nenter the lock code : ");
    scanf("%d",&lp);
}
void login()
{
    int llp,t=1;
    printf("\n\nLOGIN INTERFACE :");
    while(t>0)
    {
        printf("\n\nenter the lock code : ");
        scanf("%d",&llp);  
        if(lp==llp)
        {
            printf("\nLOGIN SUCCESSFULLY\n\n");
            t=0;
        }
        else
        {
            printf("\nINVALID LOCK CODE\n\n");
        }
    }
}
void profile()
{
    printf("\n\nPROFILE INTERFACE : ");
    printf("\n\nNAME : SUMIT KUSHWAHA\nNUMBER OF ACCOUNT : 2");
    printf("\nEMAIL :sumitkushwaha2411003@gmail.com\nHDFCbank\nLANGUAGE : ENGLISH\nACCOUNT DETAIL :\n\n");
    printf("S.NO\t\tACCOUNT NUMBER\t\tPIN\t\tPHONE NUMBER");
    printf("\n1\t\t%ld\t\t%d\t\t%ld\n2\t\t%ld\t\t%d\t\t%ld\n",ac[0],pin[0],pn[0],ac[1],pin[1],pn[1]);
}
void dashboard()
{
    printf("\n\nDASHBOARD INTERFACE :");
    printf("\n\nUPI-ID : sumitkushwaha2411003@hdfc ");
}
void paycontact()
{
    printf("\n\nPAY TO CONTACT INTERFACE : \n\n");
    long int n[10]={1111111111,2222222222,3333333333,4444444444,5555555555,6666666666,7777777777,8888888888,9999999999,1000000000},sc;
    int sa,ap; 
    float pamt;
    for(i=0;i<10;i++)
    {
        printf("%d. %ld\n",i+1,n[i]);
    }
    printf("\n\nenter the contact number to pay : ");
    scanf("%ld",&sc);
    printf("enter the amount to pay : ");
    scanf("%f",&pamt);
    printf("\npress 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\n\nselect account : ");
    scanf("%d",&sa);
    switch(sa)
    {
        case 1:
        printf("enter the pin : ");
        scanf("%d",&ap);
        if(ap==pin[0])
        {
            if(amt[0]>=pamt)
            {
                amt[0]=amt[0]-pamt;
                printf("\nPAYMENT SUCCESSFULL");
            }
            else
            {
                printf("\nINSUFFICIENT amount\n\n");
            }  
            }
        else
        {
            printf("\nPIN MISMATCH\n\n");
        }
        break;
        case 2:
        printf("enter the pin : ");
        scanf("%d",&ap);
        if(ap==pin[1])
        {
            if(amt[1]>=pamt)
            {
                amt[1]=amt[1]-pamt;
                printf("\nPAYMENT SUCCESSFULL");
            }
            else
            {
                printf("\nINSUFFICIENT amount\n\n");
            }  
        }
        else
        {
            printf("\nPIN MISMATCH\n\n");
        }
        break;
        default :
        printf("\ninvalid input\n\n");
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
    printf("enter the amount to pay : ");
    scanf("%f",&pamt);
    printf("\npress 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\n\nselect account : ");
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
                if(amt[0]>=pamt)
                {
                    amt[0]=amt[0]-pamt;
                    printf("\nPAYMENT SUCCESSFULL");
                }
            else
            {
                printf("\nINSUFFICIENT AMOUNT\n\n");
            }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
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
                if(amt[1]>=pamt)
                {
                    amt[1]=amt[1]-pamt;
                    printf("\nPAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT AMOUNT\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
            }
        }
        break;
        default :
        printf("\ninvalid input\n\n");
    }
}
void banktransfer()
{
    long int acc,racc,ifsc;
    float pamt;
    int ap,sa,t=1;
    printf("\n\nBANK TRANSFER INTERFACE");
    printf("\n\nenter the account number : ");
    scanf("%ld",&acc);
    printf("re-enter the account number : ");
    scanf("%ld",&racc);
    printf("enter the ifsc code : ");
    scanf("%ld",&ifsc);
    printf("enter the amount : ");
    scanf("%f",&pamt);
    printf("\npress 1 for %ld account\npress 2 for %ld account\n",ac[0],ac[1]);
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
                if(amt[0]>=pamt)
                {
                    amt[0]=amt[0]-pamt;
                    printf("\nPAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
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
                if(amt[1]>=pamt)
                {
                    amt[1]=amt[1]-pamt;
                    printf("\nPAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
            }
        }
        break;
        default:
        printf("\ninvalid input\n\n");
    }
}
void upiid()
{
    long int upi;
    float pamt;
    printf("\n\nUPI ID TRANSFER");
    printf("\n\nenter the upi-id : ");
    scanf("%ld",&upi);
    printf("enter the amount :");
    scanf("%f",&pamt);
    int ap,sa,t=1;
    printf("\npress 1 for %ld account\npress 2 for %ld account\n",ac[0],ac[1]);
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
                if(amt[0]>=pamt)
                {
                    amt[0]=amt[0]-pamt;
                    printf("\nPAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
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
                if(amt[1]>=pamt)
                {
                    amt[1]=amt[1]-pamt;
                    printf("\nPAYMENT SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
            }
        }
        break;
        default:
        printf("\ninvalid input");
    }
}
void selftransfer()
{
    int d,c,t=1,p;
    float a;
    printf("\n\nSELF TRANSFER INTERFACE :\n\n");
    printf("select account to be debited :\n");
    printf("\npress 1 for %ld\npress 2 for %ld",ac[0],ac[1]);
    printf("\n\nenter your choice : \n");
    scanf("%d",&d);
    printf("\nselect account to be credited :\n");
    printf("\npress 1 for %ld\npress 2 for %ld",ac[0],ac[1]);
    printf("\n\nenter your choice : ");
    scanf("%d",&c);
    printf("\nenter the amount to be tranferred : ");
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
                if(amt[0]>=a)
                {
                    amt[1]=amt[1]+a;
                    amt[0]=amt[0]-a;
                    t=0;
                    printf("\nTRANSFERRED SUCCESSFULLY");
                }
                else
                {
                    printf("\nINSUFFICIENT BALANCE\n\n");   
                }
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
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
                if(amt[1]>=a)
                {
                    amt[0]=amt[0]+a;
                    amt[1]=amt[1]-a;
                    t=0;
                    printf("\nTRANSFERRED SUCCESSFULLY");
                }
                else
                {
                    printf("\nINSUFFICIENT BALANCE\n\n");   
                }
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
            }
        }
        break;
        default:
        printf("\ninvalid input");
    }
}
void checkbalance()
{
    int ch,t=1,p;
    printf("\n\nCHECK BALANCE INTERFACE\n\n");
    printf("press 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\n\nenter your choice : ");
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
                printf("\naccount number\t\t\ttotal amount\n");
                printf("%ld\t\t\t\t%f",ac[0],amt[0]);
                t=0;
                printf("\n\nBALANCE FETCHED SUCCESSFULLY");
            }
            else
            {
                printf("\n\nPIN MISMATCHED\n\n");
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
                printf("%ld\t\t\t%f",ac[1],amt[1]);
                t=0;
                printf("\n\nBALANCE FETCHED SUCCESSFULLY");
            }
            else
            {
                printf("\n\nPIN MISMATCHED\n\n");
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
    printf("\n\nenter the phone number :");
    scanf("%ld",&pn);
    printf("enter the recharge amount :");
    scanf("%f",&a);
    printf("\n\npress 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\n\nselect account : ");
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
                if(amt[0]>=a)
                {
                    amt[0]=amt[0]-a;
                    printf("\nRECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
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
                if(amt[1]>=a)
                {
                    amt[1]=amt[1]-a;
                    printf("\nRECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
            }
        }
        break;
        default:
        printf("\ninvalid input\n\n");
    }
}
void dth()
{
    long int d;
    int u,sa,t=1,ap;
    float a;
    printf("DTH RECHARGE :\n\npress 1 for airtel\npress 2 for videocon\npress 3 for tatasky\n");
    printf("\nenter your choice : ");
    scanf("%d",&u);
    printf("\nenter the dth account number :");
    scanf("%ld",&d);
    printf("enter the amount of recharge : ");
    scanf("%f",&a);
    printf("\n\npress 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\n\nselect account : ");
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
                if(amt[0]>=a)
                {
                    amt[0]=amt[0]-a;
                    printf("\nDTH RECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH");
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
                if(amt[1]>=a)
                {
                    amt[1]=amt[1]-a;
                    printf("\nRECHARGE SUCCESSFULL");
                }
                else
                {
                    printf("\n\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
            }
        }
        break;
        default:
        printf("\ninvalid input\n\n");
    }
}
void electricity()
{
    int f,u,sa,ap,t=1;
    float c;
    printf("\n\nELECTRICITY BILL PAYMENT INTERFACE : ");
    printf("\n\npress 1 for UPCL\npress 2 for TATA-ELECTRIC\npress 3 for ADANI-ELECTRIC");
    printf("\n\nenter your choice : ");
    scanf("%d",&f);
    printf("\nenter the electricity units : ");
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
    printf("\nelectricity bill : %f",c);
    printf("\n\npress 1 for %ld account\npress 2 for %ld account",ac[0],ac[1]);
    printf("\n\nselect account : ");
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
                if(amt[0]>=c)
                {
                    amt[0]=amt[0]-c;
                    printf("\nELECTRICITY BILL PAID SUCCESSFULL");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
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
                if(amt[1]>=c)
                {
                    amt[1]=amt[1]-c;
                    printf("\nELECTRICITY BILL PAID SUCCESSFULLY\n\n");
                }
                else
                {
                    printf("\nINSUFFICIENT amount\n\n");
                }  
            }
            else
            {
                printf("\nPIN MISMATCH\n\n");
            }
        }
        break;
        default:
        printf("\ninvalid input\n\n");
    }
}
void main()
{
   int ch=1,chh=1,chhh=1;
   printf("\n\t\t\t\t\t\t\t\t\t\tS.K.BANKING FACILITY\n\n\t\t\t\t\t\t\t WELCOME TO THE ONLINE BANKING SYSTEM OF S.K. PRIVATE LIMITED\n\n\n\n\n");
   while(ch!=0)          
   {
        printf("\t\t\t\t\t\t\t\t\t\tpress 1 for SIGNUP\n\n\t\t\t\t\t\t\t\t\t\tpress 2 for LOGIN\n\n\t\t\t\t\t\t\t\t\t\tpress 0 for stop\n");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tENTER YOUR CHOICE  : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            signup();
            break;
            case 2:
            login();
            while(chh!=0)
            {
                printf("\n\n\t\t\t\t\t\t\t\t\t\tpress 1 for PROFILE\n\n\t\t\t\t\t\t\t\t\t\tpress 2 for DASHBORAD\n\n\t\t\t\t\t\t\t\t\t\tpress 3 for PAY-CONTACT\n\n\t\t\t\t\t\t\t\t\t\tpress 4 for PAY-NUMBER\n\n\t\t\t\t\t\t\t\t\t\tpress 5 for BANK TRANSFER\n\n\t\t\t\t\t\t\t\t\t\tpress 6 for PAY-UPIID\n\n\t\t\t\t\t\t\t\t\t\tpress 7 for SELF TRANSFER\n\n\t\t\t\t\t\t\t\t\t\tpress 8 for CHECK-BALANCE\n\n\t\t\t\t\t\t\t\t\t\tpress 9 for OTHER FACILITIES\n\n\t\t\t\t\t\t\t\t\t\tpress 0 TO STOP\n");
                printf("\n\n\t\t\t\t\t\t\t\t\t\tENTER YOUR CHOICE  : ");
                scanf("%d",&chh);
                switch(chh)
                {
                    case 1:
                    profile();
                    break;
                    case 2:
                    dashboard();
                    break;
                    case 3:
                    paycontact();
                    break;
                    case 4:
                    paynumber();
                    break;
                    case 5:
                    banktransfer();
                    break;
                    case 6:
                    upiid();
                    break;
                    case 7:
                    selftransfer();
                    break;
                    case 8:
                    checkbalance();
                    break;
                    case 9:
                    while(chhh!=0)
                    {
                        printf("\n\n\t\t\t\t\t\t\t\t\t\tpress 1 for MOBILE RECHARGE\n\n\t\t\t\t\t\t\t\t\t\tpress 2 for DTH  RECHARGE\n\n\t\t\t\t\t\t\t\t\t\tpress 3 for ELECTRICITY BILL\n\n\t\t\t\t\t\t\t\t\t\tpress 0 for STOP");
                        printf("\n\n\t\t\t\t\t\t\t\t\t\tENTER YOUR CHOICE  : ");
                        scanf("%d",&chhh);
                        switch(chhh)
                        {
                            case 1:
                            recharge();
                            break;
                            case 2:
                            dth();
                            break;
                            case 3:
                            electricity();
                            break;
                            case 0:
                            printf("\n\nOPERATION STOP\n\nTHANKS FOR VISITING\n\n");
                            break;
                            default:
                            printf("\nINVALID CHOICE");
                        }
                    }
                    break;
                    case 0:
                    printf("\n\nOPERATION STOP\n\nTHANKS FOR VISITING\n\n");
                    break;
                    default:
                    printf("\nINVALID CHOICE");
                }
            }
        }
   }
}
        