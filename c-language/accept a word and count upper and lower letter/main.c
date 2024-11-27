#include<stdio.h>
void main()
{
    char a[15];
    int i,l=0,u=0;
    puts("enter a word");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>64 && a[i]<90)
        {
            u=u+1;
        }
        else if(a[i]!=' '||a[i]>96 && a[i]<123)
        {
          l=l+1;  
        }
    }
    printf("count of upper letter=%d\ncount of lower letter=%d",u,l);
}