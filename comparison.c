//scan 3 integer array and find intersection and union of these two arrays
#include<stdio.h>
void main()
{
int t[3],k[3],i,j,p;
printf("Enter the array number 1");
for(i=0;i<3;i++)

{
scanf("%d", &t[i]);
}
printf("Enter the array number 2");
for(j=0;j<3;j++)
{
scanf("%d", &k[j]);
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {


        if(t[i]==k[j])
        p=t[i];
    printf("The intersection of two array is %d\n", p);

    }
}
}
