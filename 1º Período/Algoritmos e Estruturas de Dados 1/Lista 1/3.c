#include<stdio.h>
#include<stdlib.h>
int main (int argc, char ** argv)
{
    float velocidade,tempo,distancia;
    printf("Entre com a velocidade do veiculo \n");
    scanf(" %f", &velocidade);
    printf("Entre com o tempo que ele permaneceu nessa velocidade \n");
    scanf(" %f", &tempo);
    distancia = velocidade * tempo;
    printf("A distancia percorrida foi: %.2f\n", distancia);
    system ("pause");
    return 0;
}
