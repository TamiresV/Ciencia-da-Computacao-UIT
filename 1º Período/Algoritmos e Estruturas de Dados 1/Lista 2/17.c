#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int n,m,N,M;
    printf("Entre com um valor da altura e do comprimento do quadrado\n");
    scanf(" %d %d",&n,&m);

    for(N=1;N<=n;N++)
    {
        for(M=1;M<=m;M++)
        {
            printf("o ");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
