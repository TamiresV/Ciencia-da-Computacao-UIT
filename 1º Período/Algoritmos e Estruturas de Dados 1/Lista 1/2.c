#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (int argc, char ** argv)
{
    float massa,altura,imc;
    printf("Entre com seu peso\n");
    scanf(" %f", &massa);
    printf("Entre com sua altura\n");
    scanf(" %f", &altura);
    imc = massa / pow(altura,2);
    printf("Seu IMC eh: %.2f \n", imc);
    system("pause");
    return 0;
}
