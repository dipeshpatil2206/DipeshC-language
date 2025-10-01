#include<stdio.h>

int main()   {
int a[56],n,i,num;

printf("enter number of the element");
scanf("%d",&n);

printf("enter %d elements \n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    printf("enter the number to insert at last");
    scanf("%d",&num);


a[n] = num;
n++;
printf("new array is \n");
for(i=0;i<n;i++)
{

printf("%d\n",a[i]);}
return 0;
}
