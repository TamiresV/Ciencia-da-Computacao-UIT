#include<stdio.h>
#include<stdlib.h>
int main(int argc, char ** argv)
{
    int ano, resto;
    printf("Entre com um ano (em formato aaaa)\n");
    scanf(" %d", &ano);
    resto = ano % 4;
    switch (resto)
    {
    case 0:
        printf("Ano bissexto\n");
        break;
    default:
        printf("Nao eh ano bissexto\n");
    }
    system ("pause");
    return 0;
}
