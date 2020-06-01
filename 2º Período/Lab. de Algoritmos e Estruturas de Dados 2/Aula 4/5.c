#include <stdio.h>
#include <stdlib.h>

int elevado(int k,int n);

int main(int argc,char**argv)
{
    int k,n,r;
    printf("Entre com dois numeros inteiros e positivos:\n");
    scanf(" %d %d",&k,&n);
    r=elevado(k,n);
    printf("%d\n",r);
    system("pause");
    return 0;
}

int elevado(int k,int n)
{
    if(n==1)
    {
        return k;
    }
    else
    {
        return k*elevado(k,n-1);
    }
}
