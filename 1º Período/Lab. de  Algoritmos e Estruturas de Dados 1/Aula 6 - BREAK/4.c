#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
    int num,a,fat,x;
    int numfornecidos;
    printf("Quantos numeros seram lidos?\n");
    scanf(" %d",&numfornecidos);

    for(x=1;x<=numfornecidos;x++)
    {
    printf("Forneca um numero\n");
    scanf(" %d",&num);
    if (num < 0)
    {
        printf("Valor invalido\n");
        continue;
    }
    fat=1;
    for (a=1;a<=num;a++)
    {
        fat=fat*a;
    }
    printf("O fatorial de %d eh: %d\n",num,fat);
    }

    system("pause");
    return 0;
}
