#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

float calcula_volume (float r);

int main(int argc,char**argv)
{
    int raio;
    printf("Entre com o raio da esfera\n");
    scanf(" %d",&raio);
    printf("O volume da esfera eh:%.4f\n",calcula_volume(raio));
    system("pause");
    return 0;
}

float calcula_volume (float r)
{
    float v;
    v=(4*PI*pow(r,3))/3;
    return v;
}
