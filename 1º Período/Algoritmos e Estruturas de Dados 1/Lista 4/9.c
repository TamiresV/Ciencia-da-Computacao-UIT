#include <stdio.h>
#include <stdlib.h>

int potencia(int a,int b)
{
    int i,pot=1;
    for(i=1;i<=b;i++)
    {
        pot*=a;
    }
    return pot;
}

int main(int argc,char**argv)
{
    int a,b;
    printf("Entre com dois numeros\n");
    scanf(" %d %d",&a,&b);
    printf("%d\n",potencia(a,b));
    system("pause");
    return 0;
}
