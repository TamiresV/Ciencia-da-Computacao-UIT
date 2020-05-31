#include<stdio.h>
#include<stdlib.h>

void par (int n)
{
    int resto;
    resto = n % 2;
    switch (resto)
    {
        case 0:
            printf("PAR\n");
            break;
        default:
            printf("IMPAR\n");
    }
    system ("pause");
    return;
}

int main (int argc, char ** argv)
{
    int a;
    printf("Entre com um numero inteiro\n");
    scanf(" %d", &a);
    par(a);
    system ("pause");
    return 0;
}
