#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (int argc,char**argv)
{
    int x,y,r;
    char op;
    printf("Entre com o primeiro numero, um operador (+,-,*,/ ou ^) e o segundo numero\n");
    scanf(" %d %c %d", &x, &op, &y);

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
    printf(" %d %c %d = %d\n", x,op,y,r);
    system("pause");
    return 0;
}
