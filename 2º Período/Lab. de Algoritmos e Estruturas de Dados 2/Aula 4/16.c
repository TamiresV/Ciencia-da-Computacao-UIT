#include <stdio.h>
#include <stdlib.h>

void inverte(int n);

int main(int argc,char**argv)
{
    int n;
    printf("Entre com um numero inteiro:\n");
    scanf(" %d",&n);
    printf("O inverso eh: ");
    inverte(n);
    printf("\n");
    system("pause");
    return 0;
}

void inverte(int n)
{
    int r;
    if(n>0)
    {
        r=n%10;
        printf("%d",r);
        inverte(n/10);
    }
}
