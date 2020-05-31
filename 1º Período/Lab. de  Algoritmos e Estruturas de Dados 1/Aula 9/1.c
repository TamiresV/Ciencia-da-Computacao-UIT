#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int v1[10],v2[10],i,soma;
    soma=0;
    printf("Vetor 1:");
    for(i=0;i<10;i++) //pega todos os 10 numeros do primeiro vetor
    {
        scanf(" %d",&v1[i]);
    }
    printf("Vetor 2:");
    for(i=0;i<10;i++)//pega os 10 numeros do segundo vetor
    {
        scanf(" %d",&v2[i]);
    }
    for(i=0;i<10;i++)
    {
        soma+=v1[i]*v2[i];
    }
    printf("Resultado:%d",soma);
    system("pause");
    return 0;
}
