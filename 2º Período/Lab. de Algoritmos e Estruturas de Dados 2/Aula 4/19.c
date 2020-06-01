#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hiperfatorial(int n);

int main(int argc,char**argv)
{
    int n;
    printf("Entre com um numero para calcular o hiperfatorial\n");
    scanf(" %d",&n);
    printf("%d\n",hiperfatorial(n));
    system("pause");
    return 0;
}

int hiperfatorial(int n)
{
    int r;
    if(n==1)
    {
        return 1;
    }
    else if(n>0)
    {
        r=pow(n,n);
        return r*hiperfatorial(n-1);
    }
}
