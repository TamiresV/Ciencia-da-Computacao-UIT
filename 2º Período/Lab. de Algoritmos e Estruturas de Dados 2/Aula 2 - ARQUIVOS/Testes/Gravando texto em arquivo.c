#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char**argv)
{
    FILE*f=fopen("teste.txt","w");
    if(f==NULL)
    {
        printf("Erro de abertura\n");
        system("pause");
        exit(1);
    }
    char texto[20]="Meu programa em C";
    int i;
    //GRAVA STRING CARACTER À CARACTER;
    for(i=0;i<strlen(texto);i++)
    {
        fputc(texto[i],f);
    }
    fclose(f);
    system("pause");
    return 0;
}
