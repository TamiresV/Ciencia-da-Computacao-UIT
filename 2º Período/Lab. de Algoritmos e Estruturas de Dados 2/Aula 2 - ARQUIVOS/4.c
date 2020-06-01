#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char nome[20];
    printf("Entre com o nome do arquivo:\n");
    scanf(" %[^\n]",nome);
    FILE*f=fopen(nome,"r");
    if(f==NULL)
    {
        printf("Arquivo nao encontrado\n");
        system("pause");
        return 0;
    }

    char texto[20];
    int TAM_MAX=0;
    while(!feof(f))
    {
        while(fgets(texto,20,f)!=NULL)
        {
            TAM_MAX++;
        }
    }

    freopen(nome,"r",f);
    int i;
    float notas[TAM_MAX];
    float soma=0,media;

    for(i=0;i<TAM_MAX;i++)
    {
        fscanf(f," %f",&notas[i]);
    }
    for(i=0;i<TAM_MAX;i++)
    {
        soma+=notas[i];
    }
    media=soma/TAM_MAX;
    printf("%.f\n",media);
    system("pause");
    return 0;
}
