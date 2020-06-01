#include <stdio.h>
#include <stdlib.h>

float calculando_salario(float salario, int codigo);

int main(int argc,char**argv)
{
    char nomearquivo[30];
    printf("Entre com o nome do arquivo:\n");
    scanf(" %[^\n]",nomearquivo);

    FILE*f=fopen(nomearquivo,"r");
    FILE*g=fopen("arquivonovo.txt","w");

    if(f==NULL)
    {
        printf("Arquivo inexistente\n");
        system("pause");
        return 0;
    }
    char nome[20];
    float salario,nsalario;
    int codigo;

    while(!feof(f))
    {
        fscanf(f," %s %f %d",nome,&salario,&codigo);
        nsalario=calculando_salario(salario,codigo);
        fprintf(g,"%s %.2f %d\n",nome,nsalario,codigo);
    }
    printf("Salarios Recalculados\n");
    system("pause");
    return 0;
}

float calculando_salario(float salario, int codigo)
{
    float nsalario;
    if(codigo==1)
    {
        nsalario=(salario*110)/100;
    }
    else if(codigo==2)
    {
        nsalario=(salario*120)/100;
    }
    else if(codigo==3)
    {
        nsalario=(salario*130)/100;
    }
    else
    {
        nsalario=(salario*140)/100;
    }
    return nsalario;
}
