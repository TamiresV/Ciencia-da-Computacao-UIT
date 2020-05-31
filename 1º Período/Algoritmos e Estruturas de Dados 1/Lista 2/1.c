#include<stdio.h>
#include<stdlib.h>
int main (int argc, char ** argv)
{
    int a;
    printf("Entre com um numero inteiro\n");
    scanf(" %d", &a);
    if (a % 2 == 0)
    {
        printf(" %d eh par\n",a);
    }
    else
    {
        printf(" %d eh impar\n",a);
    }
    system ("pause");
    return 0;
}
