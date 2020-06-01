#include <stdio.h>
#include <stdlib.h>

void par_decrescente(int n);

int main(int argc,char**argv)
{
    int n;
    do
    {
        printf("Digite um numero par e positivo\n");
        scanf(" %d",&n);
    }while(n%2!=0);
    par_decrescente(n);
    system("pause");
    return 0;
}

void par_decrescente(int n)
{
    if(n>=0)
    {
        printf("%d\n",n);
        par_decrescente(n-2);
    }
}
