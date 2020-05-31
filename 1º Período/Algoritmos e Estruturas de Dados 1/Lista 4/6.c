#include <stdio.h>
#include <stdlib.h>

void imprime_se_eh_perfeito(int n)
{
    int i,soma=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            soma+=i;
        }
    }
    if(soma==n)
    {
        printf("PERFEITO\n");
    }
    else
    {
        printf("IMPERFEITO\n");
    }
    return;
}

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    imprime_se_eh_perfeito(num);
    system("pause");
    return 0;
}
