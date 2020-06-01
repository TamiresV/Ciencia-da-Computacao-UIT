#include <stdio.h>
#include <stdlib.h>

int imprime1(int n)
{
    return imprime2(n,0);
}

void imprime2(int n,int i)
{
    if(i<=n)
    {
        printf("%d ",i);
        imprime2(n,i+1);
    }
}

int main(int argc,char**argv)
{
    imprime1(5);
    system("pause");
    return 0;
}
