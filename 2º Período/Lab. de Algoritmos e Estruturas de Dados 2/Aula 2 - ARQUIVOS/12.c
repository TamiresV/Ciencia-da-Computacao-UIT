#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char**argv)
{
    char arquivo1[51],arquivo2[50];

    printf("Nome do primeiro arquivo:\n");
    scanf(" %[^\n]",arquivo1);
    printf("Nome do segundo arquivo:\n");
    scanf(" %[^\n]",arquivo2);

    FILE*f=fopen(arquivo1,"r");
    FILE*g=fopen(arquivo2,"r");

    if(f==NULL||g==NULL)
    {
        printf("Arquivo(s) nao encontrado(s)\n");
    }


    int a,b,i=1;
    while(!feof(f)||!feof(g))
    {
        a=fgetc(f);
        b=fgetc(g);
        if((a==b)&&(a!=-1||b!=-1))
        {
            printf("%d-%c(%d)\n",i,a,a);
        }
        i++;
    }
    fclose(f);
    fclose(g);
    system("pause");
    return 0;
}
