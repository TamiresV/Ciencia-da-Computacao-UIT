#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[20];
    int horastrabalhadas;
    float valorhora;
}Projeto;

Projeto inserirprojeto()
{
    Projeto x;
    printf("Nome:\n");
    scanf(" %[^\n]",x.nome);
    printf("Horas Trabalhadas:\n");
    scanf(" %d",&x.horastrabalhadas);
    printf("Valor Hora:\n");
    scanf(" %f",&x.valorhora);
    return x;
}

float valorProjeto (Projeto x){
    float res;
    res=x.horastrabalhadas*x.valorhora;
    return res;
}

void exibirprojeto(Projeto x)
{
    float valor_proj;
    printf("Nome:%s\n",x.nome);
    printf("Horas Trabalhadas:%d\n",x.horastrabalhadas);
    printf("Valor Hora:%f\n",x.valorhora);
    valor_proj=valorProjeto(x);
    printf("Valor do projeto:%f\n",valor_proj);
}

int main(int argc,char**argv)
{
    Projeto v[10];
    int n,cont=0;
    int i,j,k;
    char nomeprojeto[20];
    for(i=0;i<10;i++)
    {
        printf("1-Inserir um projeto:\n");
        printf("2-Procurar projeto nome:\n");
        printf("3-Listar todos dados dos projetos, inclusive o valor de projeto:\n");
        printf("4-sair\n");
        scanf(" %d",&n);
        if(n==1)
        {
            if(cont==10)
            {
                printf("Impossivel inserir projeto\n");
                break;
            }
            v[i]=inserirprojeto();
        }
        else if(n==2)
        {
            printf("Projeto a ser procurado:\n");
            scanf(" %[^\n]",nomeprojeto);
            for(j=0;j<10;j++)
            {
                if(strcmp(v[j].nome,nomeprojeto)==0)
                {
                    exibirprojeto(v[j]);
                }
            }
        }
        else if(n==3)
        {
            for(k=0;k<10;k++)
            {
                exibirprojeto(v[k]);
            }
        }
        else
        {
            break;
        }
    }
    system("pause");
    return 0;
}
