#include <stdio.h>
#include <stdlib.h>

void imprime_potencia(int a,int b)
{
    int i,pot=1;
    for(i=1;i<=b;i++)
    {
        pot*=a;
    }
    printf("%d\n",pot);
}

int main(int argc,char**argv)
{
    int a,b;
    printf("Entre com dois numeros\n");
    scanf(" %d %d",&a,&b);
    imprime_potencia(a,b);
    system("pause");
    return 0;
}
