#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int linha,coluna,numlinha,numcoluna;

    printf("Digite o numero de linhas\n");
    scanf(" %d",&numlinha);
    printf("Digite o numero de colunas\n");
    scanf(" %d",&numcoluna);

    for(linha=1;linha<=numlinha;linha++)
    {
        for (coluna=1;coluna<=numcoluna;coluna++)
        {
            if (coluna==1||coluna==numcoluna||linha==1||linha==numlinha)
            {
                printf("o");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
