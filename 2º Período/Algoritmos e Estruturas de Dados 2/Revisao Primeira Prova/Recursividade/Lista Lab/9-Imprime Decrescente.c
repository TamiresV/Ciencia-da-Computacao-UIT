#include <stdio.h>
#include <stdlib.h>

void imprimeDecres(int n)
{
    if(n>=0)
    {
        printf("%d ",n);
        imprimeDecres(n-1);
    }
}

int main(int argc,char**argv)
{
    imprimeDecres(5);
    system("pause");
    return 0;
}
