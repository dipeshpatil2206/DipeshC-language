#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[50], b[50];
    printf("Enter the string:");
    gets(a);
    printf("Original string  %s\n",a);
    printf("Length of a string %d\n",strlen(a));
    strlwr(a);
    printf("In lower case %s \n",a);
    strupr(a);
    printf("In upper case %s \n",a);
    strcpy(b,a);
    printf("Copied...%s\n",b);
    printf("Comparing we get %d\n",strcmp(a,b));
    strrev(a);
    printf("reversing the string, we get %s\n",a);


}
