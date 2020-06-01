#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char texto[50];
    int i=0;
    FILE*f=fopen("notas.txt","r");
    if(f==NULL)
    {
        printf("Arquivo nao encontrado\n");
        system("pause");
        return 0;
    }
    while(!feof(f))
    {
        texto[i]=fgetc(f);
        printf("%c",texto[i]);
        i++;
    }
    printf("\n");

    system("pause");
    return 0;
}
