#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char nome[10];
    printf("Entre com o nome do arquivo:\n");
    scanf(" %[^\n]",nome);
    FILE*f=fopen(nome,"r");
    if(f==NULL)
    {
        printf("Arquivo nao encontrado\n");
        system("pause");
        return 0;
    }
    int i=0,direita=0,esquerda=0;
    char p[100];
    while(!feof(f))
    {
       p[i]=fgetc(f);
       if(p[i]=='{')
        {
            direita++;
        }
       else if(p[i]=='}')
       {
           esquerda++;
       }
       i++;
    }
    if(direita==esquerda)
    {
        printf("Numero de chaves esquerdas e direitas sao iguais\n");
    }
    else
    {
        printf("Numero de chaves esquerdas e direitas sao diferentes\n");
    }
    system("pause");
    return 0;
}
