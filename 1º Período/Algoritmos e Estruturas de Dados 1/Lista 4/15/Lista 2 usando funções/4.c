#include<stdio.h>
#include<stdlib.h>

void bissexto (int n)
{
    int resto;
    resto = n % 2;
    switch (resto)
    {
    case 0:
        printf("Ano bissexto\n");
        break;
    default:
        printf("Nao eh ano bissexto\n");
    }
    system ("pause");
    return;
}

int main (int argc, char ** argv)
{
    int ano;
    printf("Entre com um ano\n");
    scanf(" %d", &ano);
    bissexto(ano);
    system ("pause");
    return 0;
}
