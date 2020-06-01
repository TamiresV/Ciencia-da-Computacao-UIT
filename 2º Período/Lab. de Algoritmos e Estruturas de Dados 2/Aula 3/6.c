#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cadastra_funcionario(int idade,int tempo,int filhos)
{
    int total,r=0,s=0,t=0;
    if(idade>45)
    {
        r=idade-45;
        r*=5;
    }
    if(filhos>0)
    {
        if(filhos>3)
        {
            s=45;
        }
        else
        {
            s=15*filhos;
        }
    }
    t=20*tempo;
    total=r+s+t;
    return total;
}

int main(int argc,char**argv)
{
    FILE*f=fopen("bonus.txt","w");
    char nome[30];
    int n,idade,tempo,filhos,bonus;
    while(1)
    {
        printf("Digite 1 para calcular, ou 0 para terminar o programa\n");
        scanf(" %d",&n);
        if(n==0)
        {
            break;
        }
        printf("Nome do funcionario, idade, tempo de servico e numero de filhos\n");
        scanf(" %[^\n] %d %d %d",nome,&idade,&tempo,&filhos);
        bonus=cadastra_funcionario(idade,tempo,filhos);
        fprintf(f,"%s:%d\n",nome,bonus);
    }
    fclose(f);
    system("pause");
    return 0;
}
