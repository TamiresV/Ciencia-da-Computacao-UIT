#include <stdio.h>
#include <stdlib.h>

int conta_digitos(int k,int n);

int main(int argc,char**argv)
{
    int n,k;
    printf("Entre com um digito e um numero natural:\n");
    scanf(" %d %d",&k,&n);
    printf("O digito %d aparece %d vezes no numero %d\n",k,conta_digitos(k,n),n);
    system("pause");
    return 0;
}

int cont=0;

int conta_digitos(int k,int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        if(n%10==k)
        {
            cont++;
        }
        conta_digitos(k,n/10);
    }
    return cont;
}
