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
    p=topo;
    int menor=topo->elemento;
    p=p->prox;

    while(p!=NULL)
    {
        if((p->elemento)<menor)
        {
            menor=p->elemento;
        }
        p=p->prox;
    }
    printf("Menor:%d\n",menor);
}

int main(int argc,char**argv)
{
    inserir(4);
    inserir(7);
    inserir(23);
    inserir(9);
    mostrar();
    soma();

    system("pause");
    return 0;
}
