#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int n,i;
    float x[100000], y[100000], z[100000],soma;

    printf("Entre com um numero entre 1 e 100.000 e para o tamanho do vetor\n");
    scanf(" %d",&n);

    soma=0;

    printf("Digite os numeros do primeiro vetor\n");
    for(i=0;i<n;i++)
    {
        scanf(" %f",&x[i]);
    }
    printf("Digite os numeros do segundo vetor\n");
    for(i=0;i<n;i++)
    {
        scanf(" %f",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        z[i]=x[i]*y[i];
        soma+=z[i];
    }
    printf("Saida:%.2f\n",soma);
    system("pause");
    return 0;
}
