#include <stdio.h>
#include <stdlib.h>

int v[]={1,2,3,4,5};
int MAXTAM=6;

int somaElementos(int v[],int p,int u)
{
    int i,soma=0;
    for(i=p;i!=u;i=(i+1)%MAXTAM)
    {
        soma+=v[i];
    }
    return soma;
}

int main(int argc,char**argv)
{
    int r;
    r=somaElementos(v,0,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
