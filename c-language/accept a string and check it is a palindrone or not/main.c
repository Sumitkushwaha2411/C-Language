#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    int i,j=0,k=0;
    puts("enter the string :");
    gets(a);
    strcpy(b,a);
    for(i=strlen(a)-1;i>=0;i--)
    {
        if(a[i]!=b[k])
        {
            j=1;
            break;
        }
        k++;
    }
    if(j==0)
    {
        puts("it is a palindrone string");
    }
    else
    {
        puts("it is not palindrone string");
    }
}