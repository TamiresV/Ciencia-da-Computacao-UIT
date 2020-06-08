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
Celula *buscaAnterior(Celula *x);
void mostrarAoContrario();

void inserir(int x)
{
    Celula *tmp=novaCelula(x);
    tmp->prox=topo;
    topo=tmp;
    tmp=NULL;
}

Celula * buscaAnterior(Celula *x)
{
	Celula *i;

	for(i=topo; i->prox != NULL; i = i->prox)
	{
		if(i-> prox == x)
        {
            return i;
        }
	}
}

void mostrarAoContrario()
{
	Celula *i;

	for(i=topo; i->prox != NULL; i = i->prox);

	while(i != topo)
	{
		printf("%d ", i->elemento);
		i = buscaAnterior(i);
	}
	printf("%d\n",topo->elemento);
}


int main(int argc,char**argv)
{
    inserir(4);
    inserir(7);
    inserir(3);
    inserir(9);
    mostrarAoContrario();

    system("pause");
    return 0;
}
