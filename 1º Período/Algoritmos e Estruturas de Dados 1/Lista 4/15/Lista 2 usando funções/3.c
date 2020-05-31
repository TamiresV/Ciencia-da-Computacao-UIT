#include<stdio.h>
#include<stdlib.h>

void bissexto (int ano)
{
    if (ano % 4 == 0) //quando o ano é dividido por 4 e nao tem resto ele é bissexto
    {
        printf("Bissexto\n");
    }
    else
    {
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
