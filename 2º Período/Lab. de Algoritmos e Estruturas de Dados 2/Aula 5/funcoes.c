//1)Os elementos ficam, necessariamente, em posições de memória adjacentes, ou ainda,"em sequência".
//2) O espaço de memória para todos os elementos que poderão fazer parte do conjunto é dimensionado previamente;
// Esse espaço de memória permanecerá reservado durante toda a execução do programa, mesmo que não estiver sendo efetivamente utilizado.
//3)

#include <stdio.h>
#include <stdlib.h>

//Faça uma função para buscar o produto de menor preço. A função deve retornar se a operação foi possível ou não;
void menorPreco(int n)//se retornar 0 nao foi possivel encontrar menor valor
{
    int i;
    float menor=array[0].valor;
    for(i=1;i<n;i++)
    {
        if(menor>array[i].valor)
        {
            menor=array[i].valor;
        }
        if(menor==array[i].valor)
        {
            printf("Nao foi possivel encontrar menor preco\n");
            exit(1);
        }
    }
    printf("Menor preco encontrado\n");
}

//Faça uma função que retorne a média do valor dos produtos cadastrados na lista;
float mediaLista(int n)
{
    float media=0,soma=0;
    int quanttotal=0;
    int i;
    for(i=0;i<n;i++)
    {
        soma+=array[i].valor*array[i].qtdeEstoque;
        quanttotal+=array[i].qtdeEstoque;
    }
    media=soma/quanttotal;
    return media;
}

//Faça uma função para trocar de posição dois produtos da lista. A função deve retornar se a operação foi possível ou não;
void trocaProduto(int n,int m)
{
    if(n>=cont||m>=cont)
    {
        printf("Impossivel trocar\n");
        exit(1);
    }
    PRODUTO novo;
    novo=array[n];
    array[n]=array[m];
    array[m]=novo;
    printf("Troca concluida\n");
}

//Faça uma função para concatenar duas listas de produtos em uma terceira lista que deverá ser retornada pela função.
//Não empregue funções implementadas;
int concatena(int v1[],int v2[],int tam1,int tam2)
{
    int v3[tam1+tam2];
    int i,j=0;
    for(i=0;i<tam1;i++)
    {
        v3[i]=v1[i];
    }
    for(i=tam1;i<tam1+tam2;i++)
    {
        v3[i]=v2[j];
        j++;
    }
    return v3;
}

//Fazer uma função que copia uma lista de produtos L1 em uma outra lista L2;
int copia(int l1[],int l2[],int tam1)
{
    int i;
    for(i=0;i<tam1;i++)
    {
        l2[i]=l1[i];
    }
    return l2;
}

//Fazer uma função que copia uma lista L1 em outra L2, eliminando os elementos repetidos;
int copia2(int v[],int tam1)
{
    int v2[TAM];
    int i,j,aux;

    for(i=0;i<tam1-1;i++)
    {
        if(v1[i]>v1[i+1])
        {
            aux=v1[i];
            v1[i]=v1[i+1];
            v1[i+1]=aux;
        }
        for(j=i;j>=1;j--)
        {
            if(v1[j]<=v1[j-1])
            {
                aux=v1[j];
                v1[j]=v1[j-1];
                v1[j-1]=aux;
            }
            else
            {
                j=0;
            }
        }
    }

    v2[0]=v1[0];
    int k=1;
    for(i=1;i<tam1;i++)
    {
        for(j=0;j<k;j++)
        {
            if(v1[i]!=v1[j]&&v1[i]!=v1[i+1])
            {
                v2[k]=v1[i];
                k++;
                break;
            }
        }
    }
    return v2;
}


//Fazer uma função para inverter uma lista de produtos L1 colocando o resultado em L2;
int copiaInvertido(int l1[],int tam1)
{
    int i,j=0;
    int l2[MAXTAM];
    for(i=tam1-1;i>=0;i--)
    {
        l2[j]=l1[i];
        j++;
    }
    return l2;
}
//Fazer uma função que realiza o merge de duas listas ordenadas
int merge(int v1[],int v2[],int tam1,int tam2)
{
    int v3[TAM];
    int tam3=tam1+tam2;
    int i,j,aux,k=0;

    for(i=0;i<tam1;i++)
    {
        v3[i]=v1[i];
    }
    for(i=tam1;i<tam1+tam2;i++)
    {
        v3[i]=v2[k];
        k++;
    }

    for(i=0;i<tam3-1;i++)
    {
        if(v3[i]>v3[i+1])
        {
            aux=v3[i];
            v3[i]=v3[i+1];
            v3[i+1]=aux;
        }
        for(j=i;j>=1;j--)
        {
            if(v3[j]<=v3[j-1])
            {
                aux=v3[j];
                v3[j]=v3[j-1];
                v3[j-1]=aux;
            }
            else
            {
                j=0;
            }
        }
    }

    return v3;
}


// Escreva uma função que  transforma a lista de produtos em duas listas de: a primeira contendo os elementos cujo
//código do produto é par e a segunda contendo os elementos com conteúdos ímpares.
typedef struct
{
    int par[TAM];
    int impar[TAM];
}produto;

produto parImpar(int v[],int tam)
{
    prduto x;
    int i,j=0,k=0;
    for(i=0;i<tam;i++)
    {
        if(v[i]%2==0)
        {
            x.par[j]=v[i];
            j++;
        }
        else
        {
            x.impar[k]=v[i];
            k++;
        }
    }
    return x;
}
