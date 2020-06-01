#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float altura;
    float largura;
}Retangulo;

int main(int argc,char**argv)
{
    Retangulo a,b;
    float area_a,area_b;
    printf("Entre com a altura e a largura do primeiro retangulo\n");
    scanf(" %f %f",&a.altura,&a.largura);
    printf("Entre com a altura e a largura do segundo retangulo\n");
    scanf(" %f %f",&b.altura,&b.largura);
    area_a=a.altura*a.largura;
    area_b=b.altura*b.largura;
    printf("Area primeiro retangulo:%.2f\n",area_a);
    printf("Area segundo retangulo:%.2f\n",area_b);
    system("pause");
    return 0;
}
