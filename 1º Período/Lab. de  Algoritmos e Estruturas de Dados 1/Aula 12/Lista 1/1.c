#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float area (float n);
float perimetro (float n);

int main(int argc,char**argv)
{
    float raio;
    printf("Forneca o raio da circunferencia:\n");
    scanf(" %f",&raio);
    printf("Area:%f\n",area(raio));
    printf("Perimetro:%f\n",perimetro(raio));
    system("pause");
    return 0;
}

float area(float n)
{
    float a;
    a= PI * pow(n,2);
    return a;
}

float perimetro(float n)
{
    float p;
    p= 2* PI *n;
    return p;
}
