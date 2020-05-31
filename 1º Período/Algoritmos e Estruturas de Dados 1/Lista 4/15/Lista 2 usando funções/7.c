#include<stdio.h>
#include<stdlib.h>

void imc (float massa,float altura)
{
    float imc;
    imc=massa/(altura*altura);
    printf("Seu imc eh: %.2f\n",imc);

    if (imc<18.5)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc>=18.5 && imc<25)
    {
        printf("Saudavel\n");
    }
        else if (imc>=25 && imc<30)
    {
        printf("Sobrepeso\n");
    }
        else if (imc>=30 && imc<35)
    {
        printf("Obesidade grau 1\n");
    }
        else if (imc>=35 && imc<40)
    {
        printf("Obesidade grau 2 (severa)\n");
    }
        else
    {
        printf("Obesidade grau 3 (morbida)\n");
    }
    system ("pause");
    return;
}

int main (int argc, char ** argv)
{
    float peso, alt;
    printf("Entre com seu peso e altura\n");
    scanf(" %f %f",&peso,&alt);
    imc(peso,alt);
    system ("pause");
    return 0;
}
