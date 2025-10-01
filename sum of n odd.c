#include <stdio.h>
  int main(){
        int n;
        int sum= 0;
    printf("enter the number");
      scanf("%d", &n);
      for(int i=1;i<=n;i+=2)
    sum= sum+ i;
        printf("%d",sum);

        return 0;
  }
