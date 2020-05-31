#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int senha,senhausuario;
    senha = 4123;
    while(1)
    {
        printf("Advinhe a senha\n");
        scanf(" %d",&senhausuario);
        if(senhausuario==senha)
        {
            printf("Voce acertou a senha!\n");
            break;
        }
        else if(senhausuario<senha)
        {
            printf("Senha incorreta! A senha eh maior que o numero fornecido\n");
        }
        else
        {
            printf("Senha incorreta! A senha eh menor que o numero fornecido\n");
        }
    }
    system("pause");
    return 0;
}
