#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float raiz1(float a, float b, float c);
float raiz2(float a, float b, float c);
int main(int argc,char**argv)
{
    float a,b,c;
    float x1,x2;
    printf("Entre com 3 numeros\n");
    scanf(" %f %f %f",&a,&b,&c);
    x1=raiz1(a,b,c);
    x2=raiz2(a,b,c);
    printf("Os valores das raizes sao: %.2f e %.2f\n", x1,x2);
    system ("pause");
    return 0;
}

float raiz1 (float a, float b, float c)
{
    float delta, x1;
    delta = (pow(b,2))- (4*a*c);
    x1 = (-b + sqrt(delta))/(2*a);
    return x1;
}

float raiz2 (float a, float b, float c)
{
    float delta,x2;
    delta = (pow(b,2))- (4*a*c);
    x2 = (-b - sqrt(delta))/(2*a);
    return x2;
}
