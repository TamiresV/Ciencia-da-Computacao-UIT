#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int linha,coluna,tamanho;
    printf("Entre com um numero\n");
    scanf(" %d",&tamanho);
    for(linha=0;linha<tamanho;linha++)
    {
        for (coluna=0;coluna<=linha;coluna++)
        {
                printf("o ");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
