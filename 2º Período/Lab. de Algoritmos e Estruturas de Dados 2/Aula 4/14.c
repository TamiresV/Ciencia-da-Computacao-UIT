#include <stdio.h>
#include <stdlib.h>

int maior1(int vet[],int n)
{
    return maior2(vet,n,0);
}
int maior2(int vet[],int n,int i)
{
    int r;
    if(i==n-1)
    {
        r=vet[n-1];
    }
    else
    {
        r=maior2(vet,n,i+1);
        if(r<vet[i])
        {
            r=vet[i];
        }
    }
    return r;
}

int main(int argc,char**argv)
{
    int v[10],n,i;
    int r;
    printf("Quantos numeros serao digitados:\n");
    scanf(" %d",&n);
    printf("Entre com os %d numeros\n",n);
    for(i=0;i<n;i++)
    {
        scanf(" %d",&v[i]);
    }
    r=maior1(v,n);
    printf("O maior numero do vetor eh:%d\n",r);
    system("pause");
    return 0;
}
