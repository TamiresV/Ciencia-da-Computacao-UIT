#include <stdio.h>
#include <stdlib.h>

int fibonace(int n);

int main(int argc,char**argv)
{
    int n,r;
    printf("Entre com um numero inteiro\n");
    scanf(" %d",&n);
    r=fibonace(n);
    printf("%d\n",r);
    system("pause");
    return 0;
}

int fibonace(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibonace(n-1)+fibonace(n-2);
    }
}
