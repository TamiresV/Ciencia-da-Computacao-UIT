#include<stdio.h>
#include<stdlib.h>

float distancia (float a, float b);

int main (int argc, char ** argv)
{
    float velocidade,tempo,result;
    printf("Entre com a velocidade do veiculo \n");
    scanf(" %f", &velocidade);
    printf("Entre com o tempo que ele permaneceu nessa velocidade \n");
    scanf(" %f", &tempo);
    result=distancia(velocidade,tempo);
    printf("A distancia percorrida foi: %.2f\n", result);
    system ("pause");
    return 0;
}

float distancia(float a, float b)
{
    float r;
    r=a*b;
    return r;
}
