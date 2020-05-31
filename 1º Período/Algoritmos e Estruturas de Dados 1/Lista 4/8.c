#include <stdio.h>
#include <stdlib.h>

void imprime_fatorial(int n)
{
    int i,fat=1;
    for(i=1;i<=n;i++)
    {
        fat*=i;
    }
    printf("%d\n",fat);
    return;
}

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    imprime_fatorial(num);
    system("pause");
    return 0;
}
