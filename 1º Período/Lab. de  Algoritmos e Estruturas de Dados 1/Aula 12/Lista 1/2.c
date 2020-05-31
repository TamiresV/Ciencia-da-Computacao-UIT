#include <stdio.h>
#include <stdlib.h>

int maiorDeDois (int a,int b);
int maiorDeTres (int a, int b, int c);

int main(int argc,char**argv)
{
    int a,b;
    int x,y,z;
    printf("Entre com dois numeros\n");
    scanf(" %d %d",&a,&b);
    printf("Maior:%d\n",maiorDeDois(a,b));
    printf("Entre com tres numeros\n");
    scanf(" %d %d %d",&x,&y,&z);
    printf("Maior:%d\n",maiorDeTres(x,y,z));
    system("pause");
    return 0;
}

int maiorDeDois (int a,int b)
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
    int maior;
    maior=maiorDeDois(a,b);
    maior=maiorDeDois(maior,c);
    return maior;
}
