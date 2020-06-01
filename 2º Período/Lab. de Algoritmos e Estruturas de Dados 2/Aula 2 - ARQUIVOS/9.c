#include <stdio.h>
#include <stdlib.h>
#define tam 5

typedef struct pessoa
{
    char nome[50];
    int idade;
    float altura;
    char telefone[10];
}amigos;

int main(int argc,char**argv)
{
    FILE*f=fopen("telefone.txt","r");
    FILE*g=fopen("contatos.txt","w");
    int i;
    amigos amigos[tam];
    for(i=0;i<tam;i++)
    {
        fscanf(f,"%s",amigos[i].nome);
        fscanf(f,"%d",&amigos[i].idade);
        fscanf(f,"%f",&amigos[i].altura);
        fscanf(f,"%s",amigos[i].telefone);
    }
    for(i=0;i<tam;i++)
    {
        fprintf(g,"--------\n");
        fprintf(g,"%s tem %d anos e %.2f de altura.\n",amigos[i].nome,amigos[i].idade,amigos[i].altura);
        fprintf(g,"Tel.:%s\n",amigos[i].telefone);
        fprintf(g,"--------\n");
    }
    printf("Concluido\n");
    fclose(f);
    fclose(g);
    system("pause");
    return 0;
}
