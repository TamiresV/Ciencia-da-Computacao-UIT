#include <stdio.h>
#include <stdlib.h>

float soma_elementos(float n[10]);

int main(int argc,char**argv)
{
    float n[10];
    int i;
    printf("Entre com 10 numeros\n");
    for(i=0;i<10;i++)
    {
        scanf(" %f",&n[i]);
    }
    printf("A soma eh:%.2f\n",soma_elementos(n));
    system("pause");
    return 0;
}

float soma_elementos(float n[10])
{
    int i;
    float soma=0;
    for(i=0;i<10;i++)
    {
        soma+=n[i];
    }
    return soma;
}
