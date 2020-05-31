#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int ano;
    printf("Entre com um ano(em formato aaaa)\n");
    scanf(" %d",&ano);
    if (ano % 4 == 0) //quando o ano é dividido por 4 e nao tem resto ele é bissexto
    {
        printf("%d eh ano bissexto\n",ano);
    }
    else
    {
        printf("%d nao eh ano bissexto\n",ano);
    }
    system("pause");
    return 0;
}
