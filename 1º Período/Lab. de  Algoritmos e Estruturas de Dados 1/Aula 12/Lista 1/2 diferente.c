#include <stdio.h>
#include <stdlib.h>

int maior (int a,int b);
int maiorDeTres (int a, int b, int c);

int main(int argc,char**argv)
{
    int a,b;
    int x,y,z;
    printf("Entre com dois numeros\n");
    scanf(" %d %d",&a,&b);
    printf("Maior:%d\n",maior(a,b));
    printf("Entre com tres numeros\n");
    scanf(" %d %d %d",&x,&y,&z);
    printf("Maior:%d\n",maiorDeTres(x,y,z));
    system("pause");
    return 0;
}

int maior (int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int maiorDeTres (int a, int b, int c)
{
    if(maior(a,b)>c)
    {
        return maior(a,b);
    }
    else
    {
        return c;
    }
}
