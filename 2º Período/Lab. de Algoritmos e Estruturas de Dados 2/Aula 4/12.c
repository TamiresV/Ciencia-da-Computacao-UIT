#include <stdio.h>
#include <stdlib.h>

void vetor1(int v[],int n);
void vetor2(int v[],int n,int i);

int main(int argc,char**argv)
{
    int n,v[10],i;
    printf("Quantos numeros serao digitados:\n");
    scanf(" %d",&n);
    printf("Digite os %d numeros:\n",n);
    for(i=0;i<n;i++)
    {
        scanf(" %d",&v[i]);
    }
    vetor1(v,n);
    printf("\n");
    system("pause");
    return 0;
}

void vetor1(int v[],int n)
{
    vetor2(v,n,0);
}

void vetor2(int v[],int n,int i)
{
    if(i<n)
    {
        printf("%d\t",v[i]);
        vetor2(v,n,i+1);
    }
}
