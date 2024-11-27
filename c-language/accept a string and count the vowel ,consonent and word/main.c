#include<stdio.h>
void main()
{
    char a[50];
    int i,v=0,c=0,w=1;
    puts("enter the string=");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            v=v+1;
        }
        else if(a[i]==' ')
        {
            w=w+1;
        }
        else
        {
          c=c+1;  
        }
    }
    printf("count of vowel=%d\ncount of consonent=%d\ncount of words=%d",v,c,w);
}

