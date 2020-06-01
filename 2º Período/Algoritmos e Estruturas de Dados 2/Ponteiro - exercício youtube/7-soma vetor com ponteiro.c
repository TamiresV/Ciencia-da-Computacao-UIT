#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetor[],int n)
{
    int soma=0;
    int *ponteiro;
    int *const finalVetor= vetor+n;

    for(ponteiro=vetor;ponteiro<finalVetor;++ponteiro)
    {
        soma+=*ponteiro;
    }
    return soma;
}

int main(int argc,char**argv)
{
    int somaVetor(int vetor[],int n);
    int vetor[10]={5,5,5,5,5,5,5,5,-10,-10};
    printf("Soma:%d\n",somaVetor(vetor,10));
    system("pause");
    return 0;
}
