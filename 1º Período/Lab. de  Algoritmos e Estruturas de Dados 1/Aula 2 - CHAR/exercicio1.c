#include <stdio.h>
#include <stdlib.h>
int main (int argc, char ** argv)
{
    long long int a, soma;
    printf("Entre com um numero inteiro\n");
    scanf(" %lld", &a);
    soma = 2147483647 + a;
    printf("2147483647 + %lld = %lld \n", a,soma);
    system ("pause");
    return 0;
}
