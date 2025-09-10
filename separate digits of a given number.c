#include <stdio.h>

void  main() {
int a,i,count=0;
printf("Enter a number \n");
scanf("%d",&a);
while(a>0){
    i=a%10;
    a=a/10;
    printf("%d",i);
    count++;

}printf("\nDigits in the number:%d",count);
}
