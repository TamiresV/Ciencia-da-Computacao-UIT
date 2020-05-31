#include <stdio.h>
#include <stdlib.h>

typedef struct endereco{
    char rua[200];
    int numero;
    long int cep;
    char cidade[100];
}ENDERECO;

typedef struct aluno{
    char nome[100];
    int matricula;
    float notas[3];
    ENDERECO casa;
}ALUNO;

ALUNO cadastra_aluno();
void imprime_aluno(ALUNO x);
ENDERECO cadastra_endereco();
void imprime_endereco(ENDERECO x);

int main(int argc,char**argv)
{
    ALUNO aeds1[1000];
    int num_de_alunos,i;
    printf("Entre com o numero de alunos que seram cadastrados\n");
    scanf(" %d",&num_de_alunos);
    printf("Digite os dados de cada aluno\n");
    for(i=0;i<num_de_alunos;i++)
    {
        aeds1[i]=cadastra_aluno();
    }
    printf("Os alunos de aeds1 sao:\n");
    for(i=0;i<num_de_alunos;i++)
    {
        imprime_aluno(aeds1[i]);
    }
    system("pause");
    return 0;
}

ALUNO cadastra_aluno()
{
    ALUNO x;
    printf("Nome do aluno\n");
    scanf(" %[^\n]",x.nome);
    printf("Numero da Matricula\n");
    scanf(" %d",&x.matricula);
    printf("Notas\n");
    scanf(" %f %f %f",&x.notas[0],&x.notas[1],&x.notas[2]);
    x.casa=cadastra_endereco();
    return x;
}

void imprime_aluno(ALUNO x)
{
    float notafinal;
    notafinal=x.notas[0]+x.notas[1]+x.notas[2];
    printf("Nome:%s\n",x.nome);
    printf("Matricula:%d\n",x.matricula);
    printf("Nota final:%.2f",notafinal);
    imprime_endereco(x.casa);
}

ENDERECO cadastra_endereco()
{
    ENDERECO x;
    printf("Rua\n");
    scanf(" %[^\n]",x.rua);
    printf("Numero\n");
    scanf(" %d",&x.numero);
    printf("CEP\n");
    scanf(" %ld",&x.cep);
    printf("Cidade:\n");
    scanf(" %[^\n]",x.cidade);
    return x;
}

void imprime_endereco(ENDERECO x)
{
    printf("Casa:%s",x.rua);
    printf("Numero:%d\n",x.numero);
    printf("CEP:%ld\n",x.cep);
    printf("Cidade:%s",x.cidade);
    return;
}
