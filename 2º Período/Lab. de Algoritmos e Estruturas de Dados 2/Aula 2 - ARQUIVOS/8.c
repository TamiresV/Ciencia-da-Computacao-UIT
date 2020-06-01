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
    FILE*f=fopen("telefone.txt","w");
    amigos amigos[tam];
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Nome:\n");
        scanf(" %[^\n]",amigos[i].nome);
        printf("Idade:\n");
        scanf(" %d",&amigos[i].idade);
        printf("Altura:\n");
        scanf(" %f",&amigos[i].altura);
        printf("Telefone:\n");
        scanf(" %[^\n]",amigos[i].telefone);
    }
    for(i=0;i<tam;i++)
    {
        fprintf(f,"%s\n",amigos[i].nome);
        fprintf(f,"%d\n",amigos[i].idade);
        fprintf(f,"%.2f\n",amigos[i].altura);
        fprintf(f,"%s\n",amigos[i].telefone);
    }
    return 0;
}
