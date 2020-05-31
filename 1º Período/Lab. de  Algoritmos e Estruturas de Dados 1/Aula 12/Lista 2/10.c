#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strings_iguais(char a[],char b[])
{
    int tam1=strlen(a),tam2=strlen(b),i;
    if(tam1!=tam2)
    {
        return 0;
    }
    for(i=0;i<tam1;i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc,char**argv)
{
    char palavra1[100],palavra2[100];
    printf("Forneca a primeira palavra\n");
    scanf(" %s",palavra1);
    printf("Forneca a segunda palavra\n");
    scanf(" %s",palavra2);
    if(strings_iguais(palavra1,palavra2))
    {
        printf("As palavras sao iguais\n");
    }
    else
    {
        printf("As palavras sao diferentes\n");
    }
    system("pause");
    return 0;
}
