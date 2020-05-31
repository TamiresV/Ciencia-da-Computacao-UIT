#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct
{
    int dia;
    int mes;
    int ano;
}DATA;

typedef struct
{
    char nome[51];
    int duracao;
    DATA lancamento;
}FILME;

typedef struct
{
    char nome[21];
    int quantfilmes;
    FILME filmes[100];
}DIRETOR;

FILME cadastraFilme()
{
    FILME x;
    printf("Nome do filme:\n");
    scanf(" %[^\n]",x.nome);
    printf("Duracao em minutos\n");
    scanf(" %d",&x.duracao);
    printf("Data de lancamento\n");
    scanf(" %d %d %d",&x.lancamento.dia,&x.lancamento.mes,&x.lancamento.ano);
    return x;
}

void imprimeFilme(FILME x)
{
    printf("Nome do filme:%s",x.nome);
    printf("Duracao em minutos:%d\n",x.duracao);
    printf("Data de lancamento:%.2d/%.2d/%.2d\n",x.lancamento.dia,x.lancamento.mes,x.lancamento.ano);
}

DIRETOR cadastraDiretor()
{
    DIRETOR x;
    int i;
    printf("Nome do Diretor:\n");
    scanf(" %[^\n]",x.nome);
    printf("Quantidade de filmes:\n");
    scanf(" %d",&x.quantfilmes);
    for(i=0;i<x.quantfilmes;i++)
    {
        x.filmes[i]=cadastraFilme();
    }
    return x;
}

void imprimeDiretor(DIRETOR x)
{
    int i;
    printf("Nome do Diretor:%s",x.nome);
    printf("Quantidade de filmes:%d\n",x.quantfilmes);
    for(i=0;i<x.quantfilmes;i++)
    {
        imprimeFilme(x.filmes[i]);
    }
}

int main(int argc,char**argv)
{
    DIRETOR v[TAM];
    int i;
    for(i=0;i<TAM;i++)
    {
        v[i]=cadastraDiretor();
    }
    for(i=0;i<TAM;i++)
    {
        imprimeDiretor(v[i]);
    }
    return 0;
}
