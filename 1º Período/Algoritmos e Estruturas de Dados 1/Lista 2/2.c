#include<stdio.h>
#include<stdlib.h>
int main (int argc, char** argv)
{
    int a, resto;
    printf("Entre com um numero inteiro\n");
    scanf(" %d", &a);
    resto = a % 2;
    switch (resto)
    {
        case 0:
            printf("%d eh par\n", a);
            break;
        default:
            printf("%d eh impar\n", a);
    }
    system("pause");
    return 0;
}
