#include<stdio.h>
#include<stdlib.h>

int fatorial();

int main(int argc,char**argv)
{
    int n,r;
    printf("Digite um inteiro:\n");
    scanf(" %d",&n);
    r=fatorial(n);
    printf("%d\n",r);
    system("pause");
    return 0;
}

int fatorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fatorial(n-1);
    }
}
