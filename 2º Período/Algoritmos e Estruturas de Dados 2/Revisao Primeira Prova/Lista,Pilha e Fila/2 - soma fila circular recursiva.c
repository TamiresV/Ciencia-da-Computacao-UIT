#include <stdio.h>
#include <stdlib.h>

int v[]={10,2,3,4,5};

int somaR(int v[],int p,int u)
{
    int soma=0;
    if(p!=u)
    {
        soma=v[p]+somaR(v,(p+1)%6,u);
    }
    return soma;
}

int main(int argc,char**argv)
{
    int r;
    r=somaR(v,0,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
