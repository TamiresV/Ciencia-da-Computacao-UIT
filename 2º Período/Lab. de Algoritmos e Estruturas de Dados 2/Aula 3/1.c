#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char nome_arquivo[50];
    int num_linhas=0;
    printf("Por favor, digite o nome do arquivo:\n");
    scanf(" %[^\n]",nome_arquivo);
    FILE*f=fopen(nome_arquivo,"r");
    if(f==NULL)
    {
        printf("Arquivo nao encontrado\n");
        system("pause");
        return 0;
    }

    char palavra[50];
    char letra;
    while(!feof(f))
    {
        fgets(palavra,50,f);
        printf("%s",palavra);
        num_linhas++;

        if(num_linhas==20||feof(f))
        {
            num_linhas=0;
            do
            {
                printf("\nDigite 'c' para continuar e 'e' para encerrar o programa\n");
                scanf(" %c",&letra);
                if(letra=='e')
                {
                    printf("Fim do arquivo\n");
                    system("pause");
                    return 0;
                }
                else if(letra!='e'||letra!='c')
                {
                    printf("\n");
                }
            }while(letra!='c');
        }
    }
    system("pause");
    return 0;
}
