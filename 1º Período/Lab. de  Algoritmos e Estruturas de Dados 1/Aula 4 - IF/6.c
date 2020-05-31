#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc,char**argv)
{
    float peso,altura,imc;
    printf("Entre com seu peso (em kg)\n");
    scanf(" %f",&peso);
    printf("Entre com sua altura (em metros)\n");
    scanf(" %f",&altura);
    imc=peso / pow(altura,2);
    if (imc<18.5)
    {
        printf("Classificacao: Abaixo do peso\n");
    }
    else if (imc>=18.5 && imc<25)
    {
        printf("Classificacao: peso normal\n");
    }
    else if (imc>=25&&imc<30)
    {
        printf("Classificacao: Acima do peso\n");
    }
    else
    {
        printf("Classificacao: obeso\n");
    }
    system("pause");
    return 0;
}
