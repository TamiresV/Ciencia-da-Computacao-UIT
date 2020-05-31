#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct
{
    char nome[51];
    char autor[51];
    Data publicacao;
    int edicao;
}Livro;

typedef struct
{
    Livro livros[10];
    int quantlivros;
}Biblioteca;

void insere_livro()
{
    Biblioteca x;
    if(x.quantlivros>=10)
    {
        printf("Biblioteca cheia\n");
        return;
    }
    printf("Forneca o nome do livro:\n");
    scanf(" %[^\n]",x.livros[x.quantlivros].nome);
    printf("Forneca o nome do autor:\n");
    scanf(" %[^\n]", x.livros[x.quantlivros].autor);
    printf("Edicao:\n");
    scanf(" %d",&x.livros[x.quantlivros].edicao);
    printf("Forneca a data de publicacao (formato dd/mm/aaaa):\n");
    scanf(" %d %d %d",&x.livros[x.quantlivros].publicacao.dia,&x.livros[x.quantlivros].publicacao.mes,&x.livros[x.quantlivros].publicacao.ano);
    printf("Livro inserido com sucesso!\n");
    x.quantlivros++;
}


void imprime_livro()
{
    Livro x;
    printf("Nome do livro:%s\n",x.nome);
    printf("Nome do autor:%s\n",x.autor);
    printf("Numero da edicao:%d\n",x.edicao);
    printf("Data de publicacao:%.2d/%.2d/%.2d\n",x.publicacao.dia,x.publicacao.mes,x.publicacao.ano);
}

void imprime_biblioteca()
{
    Biblioteca x;
    int i;
    for(i=0;i<x.quantlivros;i++)
    {
        imprime_livro(x.livros[i]);
    }
}

void limpa_biblioteca()
{
    Biblioteca x;
    x.quantlivros=0;
}

void exibe_opcoes()
{
    printf("Minha biblioteca:\n");
    printf("1-Inserir livro\n");
    printf("2-Imprimir biblioteca\n");
    printf("3-Limpar biblioteca\n");
    printf("4-Sair\n");
    printf("Digite a opcao:\n");
}

int main(int argc,char**argv)
{
    Biblioteca x;
    x.quantlivros=0;
    int num;
    while(1)
    {
        exibe_opcoes();
        scanf(" %d",&num);
        if(num==1)
        {
            insere_livro();
        }
        else if(num==2)
        {
            imprime_biblioteca();
        }
        else if(num==3)
        {
            limpa_biblioteca();
        }
        else
        {
            break;
        }
    }
    system("pause");
    return 0;
}
