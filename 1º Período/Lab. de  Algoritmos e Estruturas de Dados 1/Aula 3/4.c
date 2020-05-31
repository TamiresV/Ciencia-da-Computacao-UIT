#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc,char**argv)
{
    float preco1,preco2;
    int desconto;
    srand(time(NULL));

    printf("Forneca o preco do computador:\n");
    scanf(" %f",&preco1);

    int a = rand()% 30+1;
    desconto = (a * preco1) / 100;
    printf("O desconto foi de: %d%%\n",a);

    preco2 = preco1 - desconto;
    printf("O valor final a pagar sera de: %f\n",preco2);

    system("pause");
    return 0;
}
