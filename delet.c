#include<stdio.h>
int main()
{
    int a[10],n,pos,val;
    printf("enter a number of element");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter a element%d:\n",i);
        scanf("%d",&a[i]);
    }
     printf("enter a posion:");
    scanf("%d",&pos);

    for(int j=pos;j>=n-2;j++)
    {
        a[j]=a[j+1];
        printf("%d",a[j]);
    }


}
