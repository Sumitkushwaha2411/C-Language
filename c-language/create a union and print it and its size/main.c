#include<stdio.h>
typedef union employee
{
    int ei;
    char en[30];
    float s;
}s;
void main()
{
    s a;
    puts("enter employee name : ");
    gets(a.en);
    printf("enter the employee id :");
    scanf("%d",&a.ei);
    printf("enter the employee salary :");
    scanf("%f",&a.s);
    printf("employee id :%d",a.ei);
    puts(a.en);
    printf("employee salary :%f",a.s);
    printf("\nsize of union :%d",sizeof(s));
}
