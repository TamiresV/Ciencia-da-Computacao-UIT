#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float distancia;
    float consumo;
}Viagem;

float kmlitro(Viagem x)
{
    float quilometros;
    quilometros=x.distancia/x.consumo;
    return quilometros;
}

Viagem cadastra_viagem()
{
    Viagem x;
    printf("Distancia:\n");
    scanf(" %f",&x.distancia);
    printf("Consumo:\n");
    scanf(" %f",&x.consumo);
    return x;
}

void imprime_viagem (Viagem x)
{
    printf("Distancia:%.2f\t",x.distancia);
    printf("Consumo:%.2f\t",x.consumo);
    printf("Media de consumo:%.2f\n",kmlitro(x));
}

int main(int argc,char**argv)
{
    Viagem v[100];
    int i;
    for(i=0;i<100;i++)
    {
        printf("Digite a distancia e o consumo de combustivel:\n");
        v[i]=cadastra_viagem();
    }
    for(i=0;i<100;i++)
    {
        imprime_viagem(v[i]);
    }

    system("pause");
    return 0;
}
