#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int idade;
    printf("Entre com sua idade\n");
    scanf(" %d",&idade);
    if(idade<18)
    {
        printf("Crianca\n");
    }
    else if (idade>=18&&idade<=60)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Idoso\n");
    }
    system("pause");
    return 0;
}
