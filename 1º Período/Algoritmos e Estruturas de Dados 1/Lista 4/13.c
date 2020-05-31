#include <stdio.h>
#include <stdlib.h>

int e_primo(int n);
int quantos_primos(int n);

int e_primo(int n)
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int quantos_primos (int n)
{
    int i,nprimos=0;
    for(i=1;i<=n;i++)
    {
        if(e_primo(i)==1)
        {
            nprimos++;
        }
    }
    return nprimos;
}

int main(int argc,char**argv)
{
    int n;
    printf("Entre com um numero\n");
    scanf(" %d",&n);
    printf("Existem %d primos entre 1 e %d\n",quantos_primos(n),n);
    system("pause");
    return 0;
}
