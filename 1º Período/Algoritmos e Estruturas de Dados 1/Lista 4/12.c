#include <stdio.h>
#include <stdlib.h>

void imprime_valor_funcao(int a,int b, int c, int x)
{
    int func;
    func=a*(x*x)+b*x+c;
    printf("%d\n",func);
    system("pause");
    return;
}

int main(int argc,char**argv)
{
    int a,b,c,x;
    printf("Entre com os valores de a,b,c e x para retornar o valor da funcao\n");
    scanf(" %d %d %d %d",&a,&b,&c,&x);
    imprime_valor_funcao(a,b,c,x);
    system("pause");
    return 0;
}
