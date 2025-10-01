#include<stdio.h>

int main()   {
int a[56],n,i,num,p;

printf("enter number of the element");
scanf("%d",&n);

printf("enter %d elements \n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    printf("enter the number to insert ");
    scanf("%d",&num);
    printf("enter the position",n+1);
    scanf("%d",&p);

for(i=n;i>=p;i--)
{
    a[i]=a[i-1];
}
a[p-1] = num;
n++;
printf("new array is \n");
for(i=0;i<n;i++)
{

printf("%d\n",a[i]);}
return 0;
}
