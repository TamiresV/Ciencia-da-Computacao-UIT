#include <stdio.h>
#include <stdlib.h>

void imprime_se_eh_primo(int n)
{
    int i,div=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            div++;
        }
    }
    if(div==2)
    {
        printf("PRIMO\n");
    }
    else
    {
        printf("NAO PRIMO\n");
    }
}

int main(int argc,char**argv)
{
    int i;
    printf("Entre com um numero\n");
    scanf(" %d",&i);
    imprime_se_eh_primo(i);
    system("pause");
    return 0;
}
