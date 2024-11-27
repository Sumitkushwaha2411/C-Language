#include<stdio.h>
void main()
{
    int a;
    printf("enter the array size :");
    scanf("%d",&a);
    int arr[a],ba=100,add,i,n;
    for(i=0;i<a;i++)
    {
        printf("enter the %d element in array :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the index number to be searched :");
    scanf("%d",&n);
    if(n<=a)
    {
        add=ba+n*2;
        printf("address of index :%d",add);
    }
    else
    {
        printf("insufficient array size");
    }
}