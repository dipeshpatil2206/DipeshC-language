#include <stdio.h>
int main()

{
    int i,a[10];

     for(i=0;i<10;i++)
     {
         printf("plase enter the number %d",i+1);
         scanf("%d",&a[i]);
     }
     printf("%d\n",a[3]);
     printf("%d\n",a[6]);
     printf("%d\n",a[8]);

}
