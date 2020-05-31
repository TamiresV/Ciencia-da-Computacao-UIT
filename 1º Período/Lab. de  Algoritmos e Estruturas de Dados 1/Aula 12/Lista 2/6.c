#include <stdio.h>
#include <stdlib.h>

void imprime_quadrado(int n);

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    imprime_quadrado(num);
    system("pause");
    return 0;
}

void imprime_quadrado(int n)
{
    int j,i;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return;
}
