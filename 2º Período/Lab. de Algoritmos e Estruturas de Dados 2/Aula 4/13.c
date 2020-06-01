#include <stdio.h>
#include <stdlib.h>

int menor1(int vet[],int n)
{
    return menor2(vet,n,0);
}
int menor2(int vet[],int n,int i)
{
    int r;
    if(i==n-1)
    {
        r=vet[n-1];
    }
    else
    {
        r=menor2(vet,n,i+1);
        if(r>vet[i])
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
    r=menor1(v,n);
    printf("O menor numero do vetor eh:%d\n",r);
    system("pause");
    return 0;
}
