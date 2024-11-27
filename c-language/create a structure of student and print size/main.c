#include<stdio.h>
typedef struct student
{
   char name[30];
   int rn;
   float p;
}s;
void main()
{
    s a;
    puts("enter your name :");
    gets(a.name);
    printf("enter the rollno :");
    scanf("%d",&a.rn);
    printf("enter the precentage :");
    scanf("%f",&a.p);
    puts(a.name);
    printf("ROLL NO :%d\nPERCENTAGE :%f\n",a.rn,a.p);
    printf("SIZE OF STRUCTURE  : %d",sizeof(s));
}