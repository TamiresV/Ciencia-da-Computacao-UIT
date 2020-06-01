#include <stdio.h>
#include <stdlib.h>

void sequencia_crescente(int n);

int main(int argc,char**argv)
{
    int n;
    printf("Digite um numero inteiro e positivo\n");
    scanf(" %d",&n);
    sequencia_crescente(n);
    system("pause");
    return 0;
}

void sequencia_crescente(int n)
{
    if(n==0)
    {
        printf("%d\n",n);
    }
    else
    {
        sequencia_crescente(n-1);
        printf("%d\n",n);
    }
}
