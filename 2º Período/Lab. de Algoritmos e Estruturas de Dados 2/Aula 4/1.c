#include <stdio.h>
#include <stdlib.h>

int soma();
int main(int argc,char**argv)
{
    int n,r;
    printf("Digite um inteiro positivo\n");
    scanf(" %d",&n);
    r=soma(n);
    printf("%d\n",r);
    system("pause");
    return 0;
}

int soma(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+soma(n-1);
    }
}
