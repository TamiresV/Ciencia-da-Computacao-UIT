#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma_n_cubos();

int main(int argc,char**argv)
{
    int n,r;
    printf("Entre com um numero:\n");
    scanf(" %d",&n);
    r=soma_n_cubos(n);
    printf("%d\n",r);
    system("pause");
    return 0;
}

int soma_n_cubos(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return pow(n,3)+soma_n_cubos(n-1);
    }
}
