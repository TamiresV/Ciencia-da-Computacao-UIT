#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int a,metros,centimetros;

    printf("Forneca a medida em centimetros\n");
    scanf(" %d",&a);

    metros = a / 100;
    centimetros = a % 100;

    printf(" %d centimetro(s) = %d metros(s) e %d centimetro(s)",a,metros,centimetros);

    system("pause");
    return 0;
}
