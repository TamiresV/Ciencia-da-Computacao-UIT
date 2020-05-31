#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    float soma,media,vetor[100];
    int i,tam;
    soma=0;
    printf("Digite quantos numeros entre (1 e 100) teram no vetor\n");
    scanf(" %d",&tam);
    printf("Digite os %d elementos\n",tam);
    for(i=0;i<tam;i++)//pega os n elementos
    {
        scanf(" %f",&vetor[i]);
        soma+=vetor[i];
    }
    media=soma/tam;
    printf("A media foi: %f\n",media);
    system("pause");
    return 0;
}
