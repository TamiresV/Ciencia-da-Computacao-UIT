#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int m[100][100];
    int i,j,tam,maior,menor,linha,coluna;

    printf("Tamanho da matriz quadrada:\n");
    scanf(" %d",&tam);

    printf("Forneca os elementos da matriz\n");
    maior=0;
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            scanf(" %d",&m[i][j]);
            if(m[i][j]>maior)
            {
                maior=m[i][j];
                linha=i;
            }
        }
    }

    menor=m[linha][0];
    coluna=0;
    for(j=0;j<tam;j++)
    {
        if(m[linha][j]<menor)
        {
            menor=m[linha][j];
            coluna=j;
        }
    }

    printf("O elemento minimax da matriz eh %d, e se encontra na posicao [%d][%d]\n",menor,linha,coluna);
    system("pause");
    return 0;
}
