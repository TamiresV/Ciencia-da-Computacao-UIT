#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    FILE*f=fopen("teste.txt","r");
    char palavra[100];
    while(fscanf(f,"%[^\n]",palavra)==1)
    {
        printf("%s\n",palavra);
    }
    fclose(f);
    return 0;
}
