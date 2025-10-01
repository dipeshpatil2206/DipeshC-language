#include <stdio.h>
int main()

{
    int i,a[5],t;

     for(i=0;i<5;i++)
     {
         printf("plase enter the number %d    ",i+1);
         scanf("%d",&a[i]);
     }
     for(i=0;i<4;i++)
     {
         if(a[i]>a[i+1])
         {
             t=a[i];
             a[i]=a[i+1];
             a[i+1]=t;
         }
     }
     printf("%d\n",a[i]);
}
