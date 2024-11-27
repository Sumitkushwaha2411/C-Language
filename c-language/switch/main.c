#include<stdio.h>
void main()
{
    int ch,ch1;
    float a,p;
    printf("1 for circle\n2 for square \n3 for rectangle\n");
    scanf("%d",&ch);
    printf("1 for area\n2 for perimeter\n");
    scanf("%d",&ch1);
    switch(ch)
    {
        case 1:
        int r;
        printf("enter the radius=");
        scanf("%d",&r);
        switch(ch1)
        {
            case 1:
            a=3.14*r*r;
            printf("area=%f",a);
            break;
            case 2:
            p=2*3.14*r;
            printf("perimeter=%f",p);
            break;
            default:
            printf("invalid input");
        }
        break;
        case 2:
        int s;
        printf("enter the sides=");
        scanf("%d",&s);
        switch(ch1)
        {
            case 1:
            a=s*s;
            printf("area=%f",a);
            break;
            case 2:
            p=4*s;
            printf("perimeter=%f",p);
            break;
            default:
            printf("invalid input");
        }
        break;
        case 3:
        int l,b;
        printf("enter the length=");
        scanf("%d",&l);
        printf("enter the breath=");
        scanf("%d",&b);
        switch(ch1)
        {
            case 1:
            a=l*b;
            printf("area=%f",a);
            break;
            case 2:
            p=2*(l+b);
            printf("perimeter=%f",p);
            break;
            default:
            printf("invalid input");
        }
    }
    printf("\nthanks for visiting");
}