#include<stdio.h>
#include<stdlib.h>
int main (void )
{
    int c;
    FILE *pa;
    char *nome = "texto.txt";
    /* Abre o arquivo para leitura e escrita */
    if (( pa = fopen(nome, "w+")) == NULL)
    {
        printf("\n\nNao foi possivel abrir o arquivo.\n");
        exit(1);
    }
    /* Cada caracter digitado ser gravado no arquivo */
    c = getchar();
    while (!feof(stdin))
    {
        fputc(c, pa);
        c = getchar();
    }
    rewind(pa);
    /* volta ao inicio do arquivo */
    printf("\nTerminei de escrever, agora vou ler.\n");
    c = fgetc(pa);
    while (!feof(pa))
    {
        putchar(c);
        c = fgetc(pa);
    }
    fclose(pa);
    getchar(); /* Espera o usuario digitar alguma coisa */
    return 0;
}
