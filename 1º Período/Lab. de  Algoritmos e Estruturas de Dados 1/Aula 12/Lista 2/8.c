#include <stdio.h>
#include <stdlib.h>
float calcula_valor_final(float a,int b);
int main(int argc,char**argv)
{
    float compra;
    int desc;
    printf("Entre com o valor da compra e desconto\n");
    scanf(" %f %d",&compra,&desc);
    printf("O novo valor a pagar eh:%.2f\n",calcula_valor_final(compra,desc));
    system("pause");
    return 0;
}
float calcula_valor_final(float a,int b)
{
    float desconto, preco_final;
    desconto=a*b/100;
    preco_final=a-desconto;
    return preco_final;
}
