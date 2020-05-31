#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct{
    int dia;
    char mes[20];
    int ano;
}Data;

typedef struct{
    char nome[31];
    int idade;
    char sexo;
    char cpf[8];
    char cargo[31];
    float salario;
    Data nascimento;
    char codigo[10];
}Funcionario;

Data cadastra_data();
void imprime_data(Data x);
Funcionario cadastra_funcionario();
void imprime_funcionario(Funcionario x);

int main(int argc,char**argv)
{
    int i;
    Funcionario v [TAM];
    printf("Entre com os dados dos tres funcionarios\n");
    for(i=0;i<TAM;i++)
    {
        v[i]=cadastra_funcionario();
    }
    printf("Os dados dos funcionarios foram:\n");
    for(i=0;i<TAM;i++)
    {
        imprime_funcionario(v[i]);
    }
    system("pause");
    return 0;
}

Data cadastra_data()
{
    Data x;
    printf("Dia:\n");
    scanf(" %d",&x.dia);
    printf("Mes:\n");
    scanf(" %s",x.mes);
    printf("Ano:\n");
    scanf(" %d",&x.ano);
    return x;
}

void imprime_data(Data x)
{
    printf("Dia:%d\n",x.dia);
    printf("Mes:%s\n",x.mes);
    printf("Ano:%d\n",x.ano);
}

Funcionario cadastra_funcionario()
{
    Funcionario x;
    printf("Nome do Funcionario:\n");
    scanf(" %[^\n]",x.nome);
    printf("Idade:\n");
    scanf(" %d",&x.idade);
    printf("Sexo ('M' ou 'F'):\n");
    scanf(" %c",&x.sexo);
    printf("CPF:\n");
    scanf(" %s",x.cpf);
    printf("Cargo:\n");
    scanf(" %[^\n]",x.cargo);
    printf("Salario:\n");
    scanf(" %f",&x.salario);
    printf("Data de nascimento:\n");
    x.nascimento=cadastra_data();
    printf("Codigo do Setor:\n");
    scanf(" %s",x.codigo);
    return x;
}

void imprime_funcionario(Funcionario x)
{
    printf("Nome do Funcionario:%s\n",x.nome);
    printf("Idade              :%d\n",x.idade);
    printf("Sexo ('M' ou 'F')  :%c\n",x.sexo);
    printf("CPF                :%s\n",x.cpf);
    printf("Cargo              :%s\n",x.cargo);
    printf("Salario            :%.2f\n",x.salario);
    printf("Data de nascimento :");
    {
        imprime_data(x.nascimento);
    }
    printf("Codigo do Setor    :%s\n",x.codigo);
}
