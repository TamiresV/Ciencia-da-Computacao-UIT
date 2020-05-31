#include <stdio.h>
#include <stdlib.h>

int conta_digitos (int n,int d);

int main(int argc,char**argv)
{
    int a,b,i,perm=1;
    printf("Digite dois numeros inteiros\n");
    scanf(" %d %d",&a,&b);
    for(i=1;i<=9;i++)
    {
        if(conta_digitos(a,i)!=conta_digitos(b,i))
        {
            perm=0;
        }
    }
    if(perm==1)
    {
        printf("%d eh permutacao de %d\n",a,b);
    }
    else
    {
        printf("%d eh permutacao de %d\n",a,b);
    }
    system("pause");
    return 0;
}

int conta_digitos (int n,int d)
{
    int conta=0,resto;
    while(n!=0)
    {
        resto=n%10;
        n=n/10;
        if(resto==d)
        {
            conta++;
        }
    }
    return conta;
}
