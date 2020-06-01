#include <stdio.h>
#include <stdlib.h>

int fatorial_duplo(int n);

int main(int argc,char**argv)
{
    int n,r;
    do
    {
        printf("Entre com um numero impar para calcular o fatorial duplo\n");
        scanf(" %d",&n);
    }while(n%2==0);
    r=fatorial_duplo(n);
    printf("%d\n",r);
    system("pause");
    return 0;
}

int fatorial_duplo(int n)
{
    int r;
    if(n==1)
    {
        r=1;
    }
    else
    {
        r=n*fatorial_duplo(n-2);
    }
    return r;
}
