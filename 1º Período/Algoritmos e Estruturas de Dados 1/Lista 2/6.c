#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (int argc,char**argv)
{
    int x,y,a;
    char op;
    printf("Entre com o primeiro numero, um operador(+,-,*,/ ou ^) e o segundo numero\n");
    scanf(" %d %c %d",&x,&op,&y);

    switch (op)
    {
        case '+':
        a=x+y;
        printf("%d %c %d = %d\n",x,op,y,a);
        break;
        case '-':
        a=x-y;
        printf("%d %c %d = %d\n",x,op,y,a);
        break;
        case '*':
        a=x*y;
        printf("%d %c %d = %d\n",x,op,y,a);
        break;
        case '/':
        a=x/y;
        printf("%d %c %d = %d\n",x,op,y,a);
        break;
        case '^':
        a=pow(x,y);
        printf("%d %c %d = %d\n",x,op,y,a);
        break;
    }
    system ("pause");
    return 0;
}
