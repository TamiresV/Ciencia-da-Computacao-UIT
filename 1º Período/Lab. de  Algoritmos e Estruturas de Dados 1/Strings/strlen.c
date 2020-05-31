#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{
    char palavra[101];
    int tam;
    printf("string\n");
    scanf(" %s",palavra);
    tam = strlen(palavra);
    printf("%d\n",tam);
    system("pause");
    return 0;
}
