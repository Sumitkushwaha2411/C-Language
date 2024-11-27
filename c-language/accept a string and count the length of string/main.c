#include<stdio.h>
void main()
{
    char a[50];
    int c,i;
    puts("enter the string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            c=c+1;
        }
    }
    printf("length of string=%d",c);
}