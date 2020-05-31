#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

typedef struct
{
    char nome[21];
    char tipoMusica[21];
    int numinteg;
    int hank;
}BANDA;

BANDA cadastraBanda()
{
    BANDA x;
    printf("Nome da banda:\n");
    scanf(" %[^\n]",x.nome);
    printf("Tipo de Musica da Banda:\n");
    scanf(" %[^\n]",x.tipoMusica);
    printf("Numero de integrantes:\n");
    scanf(" %d",&x.numinteg);
    printf("Posicao de hanking da banda:\n");
    scanf(" %d",&x.hank);
    return x;
}

void imprimeBanda(BANDA x)
{
    printf("Nome da banda:%s\n",x.nome);
    printf("Tipo de Musica da Banda:%s\n",x.tipoMusica);
    printf("Numero de integrantes:%d\n",x.numinteg);
    printf("Posicao de hanking da banda:%d\n",x.hank);
}

BANDA bandaPorHanking(BANDA v[TAM],int a)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        if(v[i].hank==a)
        {
            return v[i];
        }
    }
}

BANDA buscaBanda(BANDA v[TAM],char palavra[20])
{
    int i;
    int comp;
    for(i=0;i<TAM;i++)
    {
        comp=strcmp(v[i].nome,palavra);
        if(comp==0)
        {
            return v[i];
        }
    }
}

int main(int argc,char**argv)
{
    BANDA v[TAM];
    BANDA lugar;
    BANDA nome;
    char buscabanda[20];
    int i,n;
    for(i=0;i<TAM;i++)
    {
        v[i]=cadastraBanda();
    }

    printf("\n\n");

    for(i=0;i<TAM;i++)
    {
        imprimeBanda(v[i]);
        printf("\n");
    }
    printf("\n\n");

    printf("Entre com um hanking:\n");
    scanf(" %d",&n);
    lugar=bandaPorHanking(v,n);
    imprimeBanda(lugar);

    printf("\n\n");

    printf("Entre com o nome de uma banda:\n");
    scanf(" %[^\n]",buscabanda);
    nome=buscaBanda(v,buscabanda);
    imprimeBanda(nome);

    printf("\n\n");

    system("pause");
    return 0;
}
