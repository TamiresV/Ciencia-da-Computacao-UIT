#include<stdio.h>
#include<stdlib.h>

void idade (int n)
{
    if(n<18)
    {
        printf("Crianca\n");
    }
    else if (n>=18&&n<=60)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Idoso\n");
    }
    system ("pause");
    return;
}

int main (int argc, char ** argv)
{
    int a;
    printf("Entre com sua idade\n");
    scanf(" %d",&a);
    idade(a);
    system ("pause");
    return 0;
}
