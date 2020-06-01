#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float serie_S(int n);

int main(int argc,char**argv)
{
    int n;
    printf("Entre com um numero inteiro\n");
    scanf(" %d",&n);
    printf("%.2f\n",serie_S(n));
    system("pause");
    return 0;
}

float serie_S(int n)
{
    float r;
    if(n>0)
    {
        r=((1+pow(n,2))/n)+serie_S(n-1);
    }
    return r;
}
