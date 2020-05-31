#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int x;
    printf("Entre com um numero inteiro\n");
    scanf(" %d",&x);
    if(x%2==0)
    {
        printf("O numero %d eh um numero par\n",x);
    }
    else
    {
        printf("O numero %d eh um numero impar\n",x);
    }
    system("pause");
    return 0;
}
