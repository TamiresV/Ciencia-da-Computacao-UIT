#include <stdio.h>
#include <stdlib.h>

int eh_positivo (int n);

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    printf("%d\n",eh_positivo(num));

    return 0;
}

int eh_positivo(int n)
{
    if(n>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
