#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char comb;
    float litros,a,pagar;

    printf("Digite o tipo de combustivel. A-alcool ou G-gasolina\n");
    scanf(" %c",&comb);
    printf("Digite a quantidade de litros comprados:\n");
    scanf(" %f",&litros);

    if(comb=='A'||comb=='a')
    {
        a=2.3*litros;
        if(litros<=20)
        {
            pagar=(97*a)/100;
        }
        else
        {
            pagar=(95*a)/100;
        }
    }
    else
    {
        a=3.2*litros;
        if(litros<=20)
        {
            pagar=(96*a)/100;
        }
        else
        {
            pagar=(94*a)/100;
        }
    }
    if(pagar>200)
    {
        pagar=pagar-10;
    }
    printf("O total a pagar sera:%.2f\n",pagar);
    system("pause");
    return 0;
}
