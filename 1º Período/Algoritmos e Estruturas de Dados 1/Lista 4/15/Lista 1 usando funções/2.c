#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float imc (float a, float b)
{
    float res;
    res=a/(pow(b,2));
    system("pause");
    return res;
}

int main(int argc,char**argv)
{
    float peso,alt,r;
    printf("Entre com seu peso\n");
    scanf(" %f",&peso);
    printf("Entre com sua altura\n");
    scanf(" %f",&alt);
    r=imc(peso,alt);
    printf("%f\n",r);
    system("pause");
    return 0;
}
