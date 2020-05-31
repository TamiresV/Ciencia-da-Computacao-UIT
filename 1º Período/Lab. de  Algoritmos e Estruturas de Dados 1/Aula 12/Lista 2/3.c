#include <stdio.h>
#include <stdlib.h>

char calcula_conceito (int n);

int main(int argc,char**argv)
{
    int num;
    printf("Entre com a nota do aluno\n");
    scanf(" %d",&num);
    printf("%c\n",calcula_conceito(num));
    system("pause");
    return 0;
}

char calcula_conceito(int n)
{
    if (n<=59)
    {
        return 'E';
    }
    else if(n>=60&&n<=69)
    {
        return 'D';
    }
    else if(n>=70&&n<=79)
    {
        return 'C';
    }
    else if(n>=80&&n<=89)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
}
