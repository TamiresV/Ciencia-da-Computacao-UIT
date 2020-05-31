#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int vetor[100],inv[100],tam,i,j;
    printf("Tamanho do vetor\n");
    scanf(" %d",&tam);
    printf("Entre com os numeros do vetor\n");
    for(i=0;i<tam;i++)//guardou todos os numeros
    {
        scanf(" %d",&vetor[i]);
    }
    j=0;
    for(i=tam-1;i>=0;i--)
    {
        inv[i]=vetor[j];
        j++;
    }
    printf("O vetor original eh: ");
    for(i=0;i<tam;i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("O vetor inverso eh: ");
    for(i=0;i<tam;i++)
    {
        printf("%d ",inv[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
