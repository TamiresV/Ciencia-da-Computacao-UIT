#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define cont 5

typedef struct{
    char chassi[20];
    char placa[20];
    int fabricacao;
}veiculo;

veiculo v[cont];
int contador=0;

veiculo cadastraveiculo(){
    veiculo x;
    printf("Chassi:\n");
    scanf(" %[^\n]",x.chassi);
    printf("Placa:\n");
    scanf(" %[^\n]",x.placa);
    printf("Fabricacao:\n");
    scanf(" %d",&x.fabricacao);
    return x;
}

void insereveiculo (veiculo x)
{
    if(contador<cont)
    {
        v[contador]=cadastraveiculo();
        contador++;
        printf("True\n") ;
    }
    else
    {
        printf("False\n");
    }
}

veiculo buscaporplaca()
{
    int i;
    char procplaca[20];
    printf("Entre com a placa a ser procurada:\n");
    scanf(" %[^\n]",procplaca);
    for(i=0;i<cont;i++)
    {
        if(strcmp(v[i].placa,procplaca)==0)
        {
            return v[i];
        }
    }
}

void imprimeveiculo(veiculo x)
{
    printf("Chassi:%s\n",x.chassi);
    printf("Placa:%s\n",x.placa);
    printf("Fabricacao:%d\n",x.fabricacao);
}

int main(int argc,char**argv)
{
    veiculo x;
    int i,n;
    for(i=0;i<cont;i++)
    {
        printf("1-Inserir um veiculo\n");
        printf("2-Buscar veiculo pela placa\n");
        printf("3-Sair\n");
        scanf(" %d",&n);
        if(n==1)
        {
            insereveiculo(v[contador]);
        }
        else if(n==2)
        {
            x=buscaporplaca();
            imprimeveiculo(x);
        }
        else
        {
            break;
        }
    }
    system("pause");
    return 0;
}
