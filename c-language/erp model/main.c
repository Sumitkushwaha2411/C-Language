#include<stdio.h>
long int id,pw;
void signup()
{
    printf("\n\nSIGNUP INTERFACE\n\n");
    printf("\nenter the student id : ");
    scanf("%ld",&id);
    printf("enter the password : ");
    scanf("%ld",&pw);
    printf("\nID HAS BEEN REGISTERED SUCCESSFULLY\n\n");
}
void login()
{
    printf("\n\nLOGIN INTERFACE\n\n");
    long int iid,ppw;
    printf("enter the student id : ");
    scanf("%ld",&iid);
    printf("enter the password : ");
    scanf("%ld",&ppw);
    if(id==iid && pw==ppw)
    {
        printf("LOGIN SUCCESSFULLY\n\n");
        printf("\n\n\n");
        printf("Welcome to SK UNIVERSITY\n\nSK UNIVERSITY is a newly emerging, multidisciplinary and one of the most promising Universities set up to facilitate quality research and training with the launch of its courses across the academic spectrum spanning Arts, Sciences, Commerce, Engineering, Management, Agriculture, Mass Communication etc.\n\nSK UNIVERSITY is a newly emerging, multidisciplinary and one of the most promising Universities set up to facilitate quality research and training with the launch of its courses across the academic spectrum spanning Arts, Sciences, Commerce, Engineering, Management, Agriculture, Mass Communication etc.\n");
        printf("\nFor more inquiry");
        printf("\nCONTACT NUMBER:\n1234567890\nEMAIL:\n@skuniversity.edu.in\n\n");
    }   
    else
    {
        printf("PASSWORD MISMATCH\n\n");
    }
    
}
void profile()
{
    printf("\n\nPROFILE INTERFACE\n\n");
    puts("NAME : SUMIT KUSHWAHA");
    printf("student id : %ld\ncourse : BACHELOR IN COMPUTER APPLICATION\ntime duration : 3 years\ndob : 24-11-2003\naddress : a block,kareli\ncity : prayagraj\nstate : UTTARPRADESH\n\n",id);
}
int tl,tp,ta;
float tap;
void attendance()
{
    int t1,p1,a1,t2,p2,a2,t3,p3,a3,t4,p4,a4,t5,p5,a5;
    float pp1,pp2,pp3,pp4,pp5;
    printf("\n\nenter the total computer archiecture and organization lecture : ");
    scanf("%d",&t1);
    printf("enter the total present in computer archiecture and organization lecture : ");
    scanf("%d",&p1);
    a1=t1-p1;
    pp1=p1*100/t1;
    printf("enter the total c-language lecture : ");
    scanf("%d",&t2);
    printf("enter the total present in c-language lecture : ");
    scanf("%d",&p2);
    a2=t2-p2;
    pp2=p2*100/t2;
    printf("enter the total database management system lecture : ");
    scanf("%d",&t3);
    printf("enter the total present in database management system lecture : ");
    scanf("%d",&p3);
    a3=t3-p3;
    pp3=p3*100/t3;
    printf("enter the total maths lecture : ");
    scanf("%d",&t4);
    printf("enter the total present in maths lecture : ");
    scanf("%d",&p4);
    a4=t4-p4;
    pp4=p4*100/t4;
    printf("enter the total management concept and practices lecture : ");
    scanf("%d",&t5);
    printf("enter the total present in management concept and practices lecture : ");
    scanf("%d",&p5);
    a5=t5-p5;
    pp5=p5*100/t5;
    tl=t1+t2+t3+t4+t5;
    tp=p1+p2+p3+p4+p5;
    ta=a1+a2+a3+a4+a5;
    tap=tp*100/tl;
    printf("\n\nSUBJECT\t\t\t\t\t\tTOTAL LECTURE\tTOTAL PRESENT\tTOTAL ABSENT\tPERCENTAGE");
    printf("\nCOMPUTER ARCHIECTURE AND ORGANIZATION\t\t%d\t\t%d\t\t%d\t\t%f",t1,p1,a1,pp1);
    printf("\nC-LANGUAGE\t\t\t\t\t%d\t\t%d\t\t%d\t\t%f",t2,p2,a2,pp2);
    printf("\nDATABASE MANAGEMENT SYSTEM\t\t\t%d\t\t%d\t\t%d\t\t%f",t3,p3,a3,pp3);
    printf("\nMATHS\t\t\t\t\t\t%d\t\t%d\t\t%d\t\t%f",t4,p4,a4,pp4);
    printf("\nMANAGEMENT CONCEPT AND PRACTICES\t\t%d\t\t%d\t\t%d\t\t%f",t5,p5,a5,pp5);
    printf("\n\nSUMMARY :\nTOTAL LECTURE IN A SEMESTER : %d\nTOTAL PRESENT IN A SEMESTER : %d\nTOTAL ABSENT IN A SEMESTER : %d\nTOTAL PERCENTAGE OF ATTENDANCE IN A SEMESTER : %f\n\n",tl,tp,ta,tap);
}
void fee()
{
    printf("\n\nS.NO\t\tFEE PARTICULARS\t\tINSTALLEMNT\t\tAMOUNT DUE\t\tAMOUNT PAID\t\tBALANCE\n");
    printf("1\t\tcollege due\t\tI\t\t\t34000\t\t\t34000\t\t\t0");
    printf("\n2\t\tcollege due\t\tII\t\t\t31000\t\t\t31000\t\t\t0\n\n");
}
void dashboard()
{
    printf("\nMY ATTENDANCE : %f",tap);
    printf("\nFEE : NO DUES");
    printf("\nNOTICE : KINDLY MAINTAIN YOUR ATTENDANCE AND ATTEND CLASS");
    printf("\nTOTAL LECTURE IN A SEMESTER : %d\nTOTAL PRESENT IN A SEMESTER : %d\nTOTAL ABSENT IN A SEMESTER : %d\n\n",tl,tp,ta);
}
void transcript()
{
    int s1,s2,s3,s4,s5,tm;
    float p,cgpa;
    printf("\n\nUNIVERSITY ROLL NO : 22201010194\n");
    printf("STUDENT NAME : SUMIT KUSHWAHA ");
    printf("\nCOURSE : BACHELOR OF COMPUTER APPLICATION\n\nRESULT :\n");
    printf("enter the computer organization and architecture marks :");
    scanf("%d",&s1);
    printf("\nenter the c-language marks :");
    scanf("%d",&s2);
    printf("\nenter the  database management system marks :");
    scanf("%d",&s3);
    printf("\nenter the maths marks :");
    scanf("%d",&s4);
    printf("\nenter the management concept and practices marks :");
    scanf("%d",&s5);
    tm=s1+s2+s3+s4+s5;
    p=tm*100/500;
    cgpa=p/9.5;
    printf("\n\nc-language\tcoa \tmaths\tmcp \tdbms\ttotal\tpercentage\tcgpa");
    printf("\n%d\t\t%d\t%d\t%d\t%d\t%d\t%f\t%f\n\n",s2,s1,s4,s5,s3,tm,p,cgpa);
}
void main()
{
   int ch=1,chh=1;
   printf("\n\t\t\t\t\t\t\t\tS.K. UNIVERSITY\n\n\t\t\t\t\t\t WELCOME TO THE ERP SYSTEM OF S.K. UNIVERSITY");
   while(ch!=0)          
   {
        printf("\n\n\n\t\t\t\t\t\t\t\tpress 1 for SIGNUP\n\n\t\t\t\t\t\t\t\tpress 2 for LOGIN\n\n\t\t\t\t\t\t\t\tpress 0 for STOP");
        printf("\n\n\t\t\t\t\t\t\t\tenter your choice : ");
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
                printf("\n\n\t\t\t\t\t\t\t\tpress 1 for PROFILE\n\n\t\t\t\t\t\t\t\tpress 2 for ATTENDANCE\n\n\t\t\t\t\t\t\t\tpress 3 for FEE\n\n\t\t\t\t\t\t\t\tpress 4 for DASHBOARD\n\n\t\t\t\t\t\t\t\tpress 5 for TRANSCRIPT\n\n\t\t\t\t\t\t\t\tpress 0 for STOP");
                printf("\nenter your choice : ");
                scanf("%d",&chh);
                switch(chh)
                {
                    case 1:
                    profile();
                    break;
                    case 2:
                    attendance();
                    break;
                    case 3:
                    fee();
                    break;
                    case 4:
                    dashboard();
                    break;
                    case 5:
                    transcript();
                    break;
                    case 0:
                    printf("operation stopped\nTHANKS FOR VISITING");
                    break;
                    default:
                    printf("invalid input");
                    break;
                }    
            }
            case 0:
            printf("\noperation stopped\nTHANKS FOR VISITING");
            break;
            default:
            printf("invalid input");
            break;
            
        }
   }
}
