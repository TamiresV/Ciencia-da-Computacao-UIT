#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char**argv)
{
    int tam1,tam2,tam3,i;
    char maior[301],menor[101],meio[101];
    char nome1[101],nome2[101],nome3[101];//CADA STRING TEM QUE TER NO MAXIMO 100 CARACTER, POIS NA HORA DE CONCATENAR, NÃO PODE
    // PASSAR DE 300 CARACTERES.
    printf("Entre com 3 palavras\n");
    scanf(" %s %s %s",nome1,nome2,nome3);

    tam1=strlen(nome1);
    tam2=strlen(nome2);
    tam3=strlen(nome3);

    if(tam1>tam2&&tam1>tam3)
    {
        for(i=0;nome1[i]!='\0';i++)
        {
            maior[i]=nome1[i];
        }
        maior[i]='\0';
    }
    else if(tam2>tam1&&tam2>tam3)
    {
        for(i=0;nome2[i]!='\0';i++)
        {
            maior[i]=nome2[i];
        }
        maior[i]='\0';
    }
    else
    {
        for(i=0;nome3[i]!='\0';i++)
        {
            maior[i]=nome3[i];
        }
        maior[i]='\0';
    }

    if(tam1<tam2&&tam1<tam3)
    {
        for(i=0;nome1[i]!='\0';i++)
        {
            menor[i]=nome1[i];
        }
        menor[i]='\0';
    }
    else if(tam2<tam1&&tam2<tam3)
    {
        for(i=0;nome2[i]!='\0';i++)
        {
            menor[i]=nome2[i];
        }
        menor[i]='\0';
    }
    else
    {
        for(i=0;nome3[i]!='\0';i++)
        {
            menor[i]=nome3[i];
        }
        menor[i]='\0';
    }

    if(nome1!=maior&&nome1!=menor)
    {
        for(i=0;nome1[i]!='\0';i++)
        {
            meio[i]=nome1[i];
        }
        meio[i]='\0';
    }
    else if(nome2!=maior&&nome2!=menor)
    {
        for(i=0;nome2[i]!='\0';i++)
        {
            meio[i]=nome2[i];
        }
        meio[i]='\0';
    }
    else
    {
        for(i=0;nome3[i]!='\0';i++)
        {
            meio[i]=nome3[i];
        }
        meio[i]='\0';
    }
    strcat(maior,meio);
    strcat(maior,menor);
    puts(maior);

    system("pause");
    return 0;
}
