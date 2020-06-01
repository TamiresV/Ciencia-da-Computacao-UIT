#include<stdio.h>
#include<stdlib.h>

void anexandotexto (char a[100],char b[100])
{
    FILE*f=fopen(a,"a");
    fprintf(f,b);
    fprintf(f,"\n");
    fclose(f);
}

int main (int argc,char**argv)
{
    int i=1;
    char nome[100];
    char b[100]="Texto do arquivo %d";

    for(i=1;i<11;i++)
    {
        sprintf(nome,"Teste %d.txt",i);
        sprintf(b,"Texto do arquivo %d",i);
        anexandotexto(nome,b);
    }
    printf("Concluido\n");
    system("pause");
    return 0;
}
