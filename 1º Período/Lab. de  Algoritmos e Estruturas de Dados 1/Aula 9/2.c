#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{
    int i,j;
    char a[103],b[103];
    printf("String\n");
    scanf(" %s",a);
    j=0;
    for(i=1;a[i]!='\0';i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]=a[0];
    j++;
    b[j]='\0';
    strcat(b,"ay");
    printf("Palavra resultante %s\n",b);
    system("pause");
    return 0;
}
