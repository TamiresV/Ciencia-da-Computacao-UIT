#include <stdio.h>
#include <stdlib.h>

int primo(int a);
int somaNPrimos(int a);

int main(int argc,char**argv)
{
    int num,soma=0,i;
    printf("Entre com um numero inteiro\n");
    scanf(" %d",&num);
    for(i=1;i<=num;i++)
    {
        if(primo(i)==1)
        {
            soma+=i;
        }
    }
    printf("A soma dos %d primos eh: %d\n",num,soma);
    system("pause");
    return 0;
}

int primo(int a)
{
    int i,div=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
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
