#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int numfornecidos,a;
    int num,mult;
    printf("Quantos numeros serao fornecidos?\n");
    scanf(" %d",&numfornecidos);
    mult=1;
    for(a=0;a<numfornecidos;a++)
    {
        printf("Entre com um numero:\n");
        scanf(" %d",&num);
        if (num==0)
        {
            continue;
        }
        mult*=num;
    }
    printf("O resultado da multiplicacao foi %d\n",mult);
    system("pause");
    return 0;
}
