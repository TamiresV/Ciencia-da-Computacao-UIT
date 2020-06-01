#include <stdio.h>
#include <stdlib.h>

void sequencia_decrescente(int n);

int main(int argc,char**argv)
{
    int n;
    printf("Digite um numero inteiro e positivo\n");
    scanf(" %d",&n);
    sequencia_decrescente(n);
    system("pause");
    return 0;
}

void sequencia_decrescente(int n)
{
    if(n>=0)
    {
        printf("%d\n",n);
        sequencia_decrescente(n-1);
    }
}
