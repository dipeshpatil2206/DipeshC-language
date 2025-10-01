#include<stdio.h>
int main()
{
    float a,b,c,largest,smallest;
    printf("Enter first number :");
    scanf("%f",&a);
    printf("Enter second number :");
    scanf("%f",&b);
    printf("Enter third number :");
    scanf("%f",&c);
    if(a>b)
    {
        if(a>c)
            largest=a;
        else
            largest=c;
    }
    else
    {
        if(b>c)
            largest=b;
        else
            largest=c;
    }
    if
        (a,b)
    {
        if(a<c)
            smallest=a;
        else
            smallest=c;
    }
    else
    {
        if(b<c)
            smallest=b;
        else
            smallest=c;
    }
    printf("Largest number is : %.2f\n",largest);
    printf("Smallest number is : %.2f\n",smallest);
    return 0;



}
