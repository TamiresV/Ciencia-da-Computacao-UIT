#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    float preco;
    int estoque;
}produto;

produto cadastra_produto (){
    produto x;
    printf("Nome:\n");
    scanf(" %[^\n]",x.nome);
    printf("Preco:\n");
    scanf(" %f",&x.preco);
    printf("Estoque:\n");
    scanf(" %d",&x.estoque);
    return x;
}

void imprime_produto(produto x)
{
    printf("Nome:%s\n",x.nome);
    printf("Preco:%.2f\n",x.preco);
    printf("Estoque:%d\n",x.estoque);
}

int main(int argc,char**argv)
{
    produto v[10];
    int i,maior=0,menor=0;

    printf("Entre com os dados dos produtos:\n");
    for(i=0;i<10;i++)
    {
        v[i]=cadastra_produto();
    }

    for(i=1;i<10;i++)
    {
        if(v[i].preco>v[maior].preco)
        {
            maior=i;
        }
    }

    for(i=1;i<10;i++)
    {
        if(v[i].preco<v[menor].preco)
        {
            menor=i;
        }
    }

    imprime_produto(v[maior]);
    imprime_produto(v[menor]);

    system("pause");
    return 0;
}
