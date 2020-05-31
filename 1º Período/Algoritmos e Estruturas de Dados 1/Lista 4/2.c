#include <stdio.h>
#include <stdlib.h>

void imprime_se_eh_par(int n)
{
    if(n%2==0)
    {
        printf("PAR\n");
    }
    else
    {
        printf("IMPAR\n");
    }
    return;
}

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    imprime_se_eh_par(num);
    system("pause");
    return 0;
}
