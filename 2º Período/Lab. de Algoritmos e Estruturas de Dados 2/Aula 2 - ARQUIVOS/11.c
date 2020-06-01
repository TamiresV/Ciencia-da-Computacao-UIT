#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char nome_arquivo[100];
    printf("Entre com o nome do arquivo:\n");
    scanf(" %[^\n]",nome_arquivo);
    FILE*f=fopen(nome_arquivo,"r");
    FILE*g=fopen("arquivo2.txt","w");
    if(f==NULL)
    {
        printf("Impossivel fazer copia\n");
        system("pause");
        return 0;
    }
    char texto[50];
    while(fgets(texto,50,f)!=NULL)
    {
        fprintf(g,texto);
    }
    printf("Copia de arquivo gerada\n");
    system("pause");
    return 0;
}
