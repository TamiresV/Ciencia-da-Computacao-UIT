#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}DATA;

typedef struct{
    char nome_do_livro[51];
    char autor[51];
    DATA data_publicacao;
    int edicao;
}LIVRO;

typedef struct{
    LIVRO livro[10];
    int quantos_livros;
}BIBLIOTECA;

BIBLIOTECA livraria;

void insere_livro(){
    LIVRO x;
    if(livraria.quantos_livros==10)
    {
        printf("Biblioteca cheia. Impossivel cadastrar mais livros\n");
        return;
    }
    printf("Forneca o nome do livro\n");
    scanf(" %s",x.nome_do_livro);
    printf("Forneca o nome do autor\n");
    scanf(" %s",x.autor);
    printf("Forneca o numero da edicao\n");
    scanf(" %d",&x.edicao);
    printf("Forneca a data de publicacao\n");
    scanf(" %d %d %d",&x.data_publicacao.dia,&x.data_publicacao.mes,&x.data_publicacao.ano);

    livraria.livro[livraria.quantos_livros]=x;
    livraria.quantos_livros++;

    printf("Livro inserido com sucesso\n");
}

void imprime_livros(LIVRO x)
{
    printf("Nome do livro:%s\n",x.nome_do_livro);
    printf("Nome do autor:%s\n",x.autor);
    printf("Numero da publicacao:%d\n",x.edicao);
    printf("Data de publicacao:%d/%d/%d",x.data_publicacao.dia,x.data_publicacao.mes,x.data_publicacao.ano);
}

void imprime_biblioteca(){
    int i;
    for(i=0;i<livraria.quantos_livros;i++)
    {
        printf("Livro %d:\n",i+1);
        imprime_livros(livraria.livro[i]);
    }
}

void limpa_biblioteca(){
    livraria.quantos_livros=0;
}

void exibe_opcoes(){
    printf("Minha biblioteca\n");
    printf("1- Inserir Livro\n");
    printf("2- Imprimir Biblioteca\n");
    printf("3- Limpar Biblioteca\n");
    printf("4- Sair\n");
    return;
}

int main(int argc,char**argv)
{
    livraria.quantos_livros = 0;
    int n;
    while(1){
        exibe_opcoes();
        printf("Digite a opcao:\n");
        scanf(" %d",&n);
        if(n==4)
        {
            break;
        }
        else if(n==1)
        {
            insere_livro();
        }
        else if(n==2)
        {
            imprime_biblioteca();
        }
        else
        {
            limpa_biblioteca();
        }
    }
    system("pause");
    return 0;
}
