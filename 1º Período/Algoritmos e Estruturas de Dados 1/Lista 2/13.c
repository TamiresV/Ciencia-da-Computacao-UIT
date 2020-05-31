#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int x,a,div;
    div = 0;
    printf("Entre com um numero inteiro e positivo\n");
    scanf(" %d",&x);
    for (a=1;a<=x;a++)
    {
        if (x%a == 0)
        {
                div++;
        }
    }
    if (div==2)
    {
        printf("Eh numero primo\n");
    }
    else
    {
        printf("Nao eh numero primo\n");
    }
    system ("pause");
    return 0;
}
