#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int num,x;
    x=1;
    printf("Entre com um numero inteiro e positivo\n");
    scanf(" %d",&num);
    while (x<=num)
    {
        printf("%d\n",x);
        x++;
    }
    system("pause");
    return 0;
}
