#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float base;
    float altura;
}Triangulo;

float calculaArea(Triangulo x)
{
    float area;
    area=(x.base*x.altura)/2;
    return area;
}

int main(int argc,char**argv)
{
    Triangulo a,b,c;
    float area_a,area_b,area_c;

    printf("Entre com a base e altura do triangulo 1\n");
    scanf(" %f %f",&a.base,&a.altura);
    area_a=calculaArea(a);

    printf("Entre com a base e altura do triangulo 2\n");
    scanf(" %f %f",&b.base,&b.altura);
    area_b=calculaArea(b);

    printf("Entre com a base e altura do triangulo 3\n");
    scanf(" %f %f",&c.base,&c.altura);
    area_c=calculaArea(c);

    printf("Area triangulo 1:%.2f\n",area_a);
    printf("Area triangulo 2:%.2f\n",area_b);
    printf("Area triangulo 3:%.2f\n",area_c);

    if(area_a>area_b && area_a>area_c)
    {
        printf("A Maior Area eh:%.2f\n",area_a);
    }
    else if(area_b>area_a && area_b>area_c)
    {
        printf("A Maior Area eh:%.2f\n",area_b);
    }
    else
    {
        printf("A Maior Area eh:%.2f\n",area_c);
    }

    system("pause");
    return 0;
}
