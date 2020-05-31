#include <stdio.h>
#include <stdlib.h>

typedef struct produto{
    int codigo;
    char descricao[100];
    float preco;
    int quantidade;
}PRODUTO;

PRODUTO carrega_produto();
void imprime_produto(PRODUTO n);

int main(int argc,char**argv)
{
    int i,num_de_produtos;
    PRODUTO n[100];
    printf("Quantos produtos ira cadastrar?\n");
    scanf(" %d",&num_de_produtos);
    printf("Digite os dados de cada produto\n");
    for(i=0;i<num_de_produtos;i++)
    {
        printf("Produto %d\n",i+1);
        n[i]=carrega_produto();
    }
    for(i=0;i<num_de_produtos;i++)
    {
        imprime_produto(n[i]);
    }
    system("pause");
    return 0;
}

PRODUTO carrega_produto()
{
    PRODUTO x;
    printf("Codigo\n");
    scanf(" %d",&x.codigo);
    printf("Descricao\n");
    scanf(" %[^\n]",x.descricao);
    printf("Preco\n");
    scanf(" %f",&x.preco);
    printf("Quantidade\n");
    scanf(" %d",&x.quantidade);
    return x;
}

void imprime_produto(PRODUTO n)
{
    printf("Codigo:     %d\n",n.codigo);
    printf("Descricao:  %s\n",n.descricao);
    printf("Preco:      %.2f\n",n.preco);
    printf("Quantidade: %d\n",n.quantidade);
}
