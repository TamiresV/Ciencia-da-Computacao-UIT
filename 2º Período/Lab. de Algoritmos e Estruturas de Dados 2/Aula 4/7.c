#include<stdio.h>
#include<stdlib.h>

int multiplicacao(int i,int n);

int main(int argc,char**argv)
{
    int i,n,r;
    printf("Entre com dois numeros para multiplicar\n");
    scanf(" %d %d",&i,&n);
    r=multiplicacao(i,n);
    printf("%d\n",r);
    system("pause");
    return 0;
}

int multiplicacao(int i, int n)
{
    if (n==1)
    {
        return i;
    }
    else
    {
        return i+multiplicacao(i,n-1);
    }
}
