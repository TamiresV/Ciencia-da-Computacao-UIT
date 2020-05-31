#include <stdio.h>
#include <stdlib.h>
int main (int argc, char ** argv)
{
    float preco1, preco2, preco3;
    float total1, total2, total3;
    int quant1, quant2,quant3;
    float total, imposto,subtotal;

    printf("Entre com o preco unitario da banana e a quantidade\n");
    scanf(" %f %d", &preco1, &quant1);
    total1 = preco1 * quant1;

    printf("Entre com o preco unitario da uva e a quantidade\n");
    scanf(" %f %d", &preco2, &quant2);
    total2 = preco2 * quant2;

    printf("Entre com o preco unitario do pessego e a quantidade\n");
    scanf(" %f %d", &preco3, &quant3);
    total3 = preco3 * quant3;

    total = total1 + total2 + total3;
    imposto = total *0.05;
    subtotal = total + imposto;

    printf("Produto Preco unitario Quantidade\tPreco Total\n");
    printf("Banana    RS %f         %d         RS %6.2f\n", preco1, quant1, total1);
    printf("Uva       RS %f         %d         RS %6.2f\n", preco2, quant2, total2);
    printf("Pessego   RS %f         %d         RS %6.2f\n\n", preco3, quant3, total3);

    printf("Total                                    RS %6.2f\n", total);
    printf("Imposto (5%)                             RS %6.2f\n", imposto);
    printf("Sub-total                                RS %6.2f\n", subtotal);

    system ("pause");
    return 0;
}
