#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20

typedef struct
{
    int dia;
    int mes;
    int ano;
}DATA;

typedef struct
{
    int hora;
    int minuto;
    int segundo;
}HORARIO;

typedef struct
{
    DATA data;
    HORARIO horario;
    char compromisso[201];
}COMPROMISSOS;

COMPROMISSOS gera_compromisso()
{
    COMPROMISSOS x;
    x.data.dia=rand()%20+1;
    x.data.mes=rand()%12+1;
    x.data.ano=rand()%4+2016;
    x.horario.hora=rand()%24;
    x.horario.minuto=rand()%60;
    x.horario.segundo=rand()%60;
    return x;
}

void imprime_compromisso(COMPROMISSOS x)
{
    printf("\n");
    printf("%.2d/%.2d/%.2d\n",x.data.dia,x.data.mes,x.data.ano);
    printf("Horario:%.2d:%.2d:%.2d\n",x.horario.hora,x.horario.minuto,x.horario.segundo);
    printf("Compromisso de teste gerado aleatoriamente\n");
    printf("\n");
}

int main(int argc,char**argv)
{
    srand(time(NULL));
    COMPROMISSOS v[TAM];
    int i;
    printf("==========Lista de Compromissos==========\n\n");
    for(i=0;i<TAM;i++)
    {
        v[i]=gera_compromisso();
    }
    for(i=0;i<TAM;i++)
    {
        printf("Compromisso %d:",i+1);
        imprime_compromisso(v[i]);
    }
    system("pause");
    return 0;
}
