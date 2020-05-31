#include <stdio.h>
#include <stdlib.h>

int e_primo(int n);
void imprime_primo (int n);

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    imprime_primo(num);
    system("pause");
    return 0;
}

int e_primo(int n)
{
    int ret,i,div=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            div++;
        }
    }
    if(div==2)
    {
        ret=1;
    }
    else
    {
        ret=0;
    }
    system("pause");
    return ret;
}

void imprime_primo (int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (e_primo(i)==1)
        {
            printf("%d\n",i);
        }
    }
    return;
}
