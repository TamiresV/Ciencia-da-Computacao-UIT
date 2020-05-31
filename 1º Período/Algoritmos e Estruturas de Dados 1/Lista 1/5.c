#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc,char**argv)
{
    float a,b,c,delta;
    float x1,x2;

    printf("Entre com 3 numeros\n");
    scanf(" %f %f %f",&a,&b,&c);

    delta = (pow(b,2))- (4*a*c);
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("Os valores das raizes sao: %.2f e %.2f\n", x1,x2);

    system ("pause");
    return 0;
}
