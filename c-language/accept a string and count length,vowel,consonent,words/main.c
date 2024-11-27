#include<stdio.h>
void main()
{
    char a[50];
    int l=0,i,v=0,c=0,s=1;
    puts("enter the string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            l=l+1;
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            v=v+1;
        }
        else if(a[i]!=' ')
        {
            c=c+1;
        }
        else
        {
            s=s+1;
        }
    }
    printf("\nlength of string=%d\nno of vowels=%d\nno of consonent=%d\nno of words=%d",l,v,c,s);
}

   