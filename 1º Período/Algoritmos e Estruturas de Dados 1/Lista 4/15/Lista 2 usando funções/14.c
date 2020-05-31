#include <stdio.h>
#include <stdlib.h>

void imprime_bissexto (int n);
int bissexto (int n);

int main(int argc,char**argv)
{
    int ano;
    printf("Entre com um ano\n");
    scanf(" %d",&ano);
    imprime_bissexto(ano);
    system("pause");
    return 0;
}

int bissexto (int ano)
{
    int r;
    if (ano % 4 == 0) //quando o ano é dividido por 4 e nao tem resto ele é bissexto
    {
        r=1;
    }
    else
    {
        r=0;;
    }
    system ("pause");
    return r;
}

void imprime_bissexto (int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if (bissexto(i)==1)
        {
            printf("%d\n",i);
        }
    }
    system ("pause");
    return;
}
