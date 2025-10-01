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
    printf("enter a value:");
    scanf("%d",&val);

    for(int j=n-1;j>=pos-1;j--)
    {
        a[j+1]=a[j];
    }
    a[pos-1]=val;
    for(int k=0;k<=n;k++)
    {
        printf(" %d",a[k]);

    }
}
