#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float calculadora (int x, int y, char op)
{
    int r;
    if (op == '+')
        {
            r = x + y;
        }
        else if (op=='-')
        {
            r= x-y;
        }
        else if (op=='*'||op=='x')
        {
            r=x*y;
        }
        else if(op=='/'||op==':')
        {
            r=x/y;
        }
        else if (op=='^')
        {
            r= pow(x,y);
        }
    system ("pause");
    return r;
}

int main (int argc, char ** argv)
{
    int a,b,res;
    char c;
    printf("Entre com dois numeros e um sinal de operacao\n");
    scanf(" %d %d %c", &a,&b,&c);
    res=calculadora(a,b,c);
    printf("%d\n",res);
    system ("pause");
    return 0;
}
