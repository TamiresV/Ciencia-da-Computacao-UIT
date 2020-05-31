#include<stdio.h>
#include<stdlib.h>
int main (int argc, char ** argv)
{
    char a;
    printf("Entre com uma letra minuscula\n");
    scanf(" %c", &a);
    a = a - 32;
    printf("A letra digitada eh %c \n", a);
    system ("pause");
    return 0;
}
