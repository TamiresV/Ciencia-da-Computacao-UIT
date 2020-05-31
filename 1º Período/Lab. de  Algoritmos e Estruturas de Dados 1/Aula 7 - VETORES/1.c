#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**arv)
{
    int vetor[100];
    int tam,i,soma;
    soma=0;
    printf("Tamanho do vetor\n");
    scanf(" %d",&tam);
    printf("Entre com os numeros do vetor:\n");
    for(i=0;i<tam;i++)
    {
        scanf(" %d", &vetor[i]);
        soma+=vetor[i];
    }
    printf("A soma dos elementos do vetor eh: %d\n",soma);
    system ("pause");
    return 0;
}
