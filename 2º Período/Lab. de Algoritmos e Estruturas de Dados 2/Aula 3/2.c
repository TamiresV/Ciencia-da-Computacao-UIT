#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char nome[50];
    printf("Por favor, digite o nome do arquivo:\n");
    scanf(" %[^\n]",nome);
    FILE*f=fopen(nome,"r");
    if(f==NULL)
    {
        printf("Arquivo nao encontrado\n");
        system("pause");
        return 0;
    }

    int primeira,ultima,porvez;
    printf("Primeira linha a ser impressa:\n");
    scanf(" %d",&primeira);
    printf("Ultima linha a ser impressa:\n");
    scanf(" %d",&ultima);
    printf("Numero de linhas impressas por vez:\n");
    scanf(" %d",&porvez);


    int num_linhas=0;
    char palavra[50],l;

    while(fgets(palavra,50,f)!=NULL)//IMPRIME A PRIMEIRA LINHA
    {
        num_linhas++;
        if(num_linhas==primeira)
        {
            fgets(palavra,50,f);
            printf("%s",palavra);
            num_linhas=1;
            break;
        }
    }

    freopen(nome,"r",f);
    while(!feof(f))
    {
        num_linhas++;
        fgets(palavra,50,f);
        printf("%s",palavra);

        if(num_linhas==porvez)
        {
            num_linhas=0;
            do
            {
                printf("\nDigite 'c' para continuar e 'e' para encerrar o programa\n");
                scanf(" %c",&l);
                if(l=='e')
                {
                    printf("Fim do arquivo\n");
                    system("pause");
                    return 0;
                }
                else if(l!='e'&&l!='c')
                {
                    printf("\n");
                }
            }while(l!='c');
        }
    }
    system("pause");
    return 0;
}
