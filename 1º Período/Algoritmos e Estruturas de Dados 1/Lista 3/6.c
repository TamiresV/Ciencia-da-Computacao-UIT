#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int i,tam;
    float vetor[100],soma;
    soma=0;
    printf("Digite quantos numeros entre (1 e 100) teram no vetor\n");
    scanf(" %d",&tam);
    printf("Digite os %d elementos do vetor\n",tam);
    for(i=0;i<tam;i++)
    {
        scanf(" %f",&vetor[i]);
        soma+=vetor[i];
    }
    printf("Soma = %.2f",soma);
    system("pause");
    return 0;
}
