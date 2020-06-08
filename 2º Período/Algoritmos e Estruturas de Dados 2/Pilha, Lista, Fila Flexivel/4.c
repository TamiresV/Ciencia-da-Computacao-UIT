#include <stdio.h>
#include <stdlib.h>

typedef struct Celula
{
    int elemento;
    struct Celula*prox;
}Celula;

Celula *novaCelula(int elemento)
{
    Celula *nova=(Celula*)malloc(sizeof(Celula));
    nova->elemento=elemento;
    nova->prox=NULL;
    return nova;
}

Celula *topo;
void start()
{
    topo=NULL;
}
void inserir(int x);
int remover();
void mostrar();

void inserir(int x)
{
    Celula *tmp=novaCelula(x);
    tmp->prox=topo;
    topo=tmp;
    tmp=NULL;
}

int remover()
{
    if(topo==NULL)
    {
        printf("Erro!");
        exit(1);
    }
    int elemento=topo->elemento;
    Celula *tmp=topo;
    topo=topo->prox;
    tmp->prox=NULL;
    free(tmp);
    tmp=NULL;
    return elemento;
}

void mostrar()
{
    Celula *i;
    printf("[");
    for(i=topo;i!=NULL;i=i->prox)
    {
        printf(" %d ",i->elemento);
    }
    printf("]\n");
}

void soma()
{
    Celula *p;
    int soma=0;
    for(p=topo;p!=NULL;p=p->prox)
    {
        soma+=p->elemento;
    }
    printf("Soma = %d\n",soma);
}

int main(int argc,char**argv)
{
    inserir(4);
    inserir(7);
    inserir(3);
    inserir(9);
    mostrar();
    soma();

    system("pause");
    return 0;
}
