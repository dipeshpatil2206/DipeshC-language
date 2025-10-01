#include<stdio.h>
int main()
{
    int notes[] = {500,200,100,50,20,10,5,2,1};
    int a,c,i;

    printf("enter the amount");
    scanf("%d",&a);

    printf("number of the note is\n ");
    for(i=0;i<9;i++){

        if(a>=notes[i]){
            c=a/notes[i];
            a=a%notes[i];
            printf("%d\n",c);}
        }
    return 0;
}
