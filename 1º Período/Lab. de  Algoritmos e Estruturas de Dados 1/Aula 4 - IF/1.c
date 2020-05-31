#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    int nota1,nota2,nota3,soma;
    printf("Entre com as tres notas do aluno\n");
    scanf(" %d %d %d",&nota1,&nota2,&nota3);
    soma=nota1+nota2+nota3;
    if (soma>=60)
    {
        printf("O aluno pontuou %d pontos, e foi aprovado!\n",soma);
    }
    else
    {
        printf("O aluno pontuou %d pontos, e foi reprovado!\n",soma);
    }
    system ("pause");
    return 0;
}
