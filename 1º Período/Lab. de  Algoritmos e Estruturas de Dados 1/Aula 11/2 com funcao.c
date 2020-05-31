#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{
    int i,j,tam;
    char a[101],inv[101];
    printf("String\n");
    scanf(" %s",a);
    tam=strlen(a);
    j=tam;
    for(i=0;i<tam;i++)
    {
        inv[i]=a[j-1];
        j--;
    }
    if(strcmp(inv,a)==0)
    {
        printf("A palavra eh um palindromo\n");
    }
    else
    {
        printf("A palavra nao eh um palindromo\n");
    }
    system("pause");
    return 0;
}
