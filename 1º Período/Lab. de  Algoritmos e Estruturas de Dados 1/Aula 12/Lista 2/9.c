#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_vogais(char n[]);

int main(int argc,char**argv)
{
    char palavra[100];
    printf("Forneca a palavra\n");
    scanf(" %s",palavra);
    printf("A palavra tem %d vogais\n",conta_vogais(palavra));
    system("pause");
    return 0;
}
int conta_vogais(char n[])
{
    int i,tam=strlen(n),num_de_vogais=0;
    for(i=0;i<tam;i++)
    {
        if(n[i]=='a'||n[i]=='A'||n[i]=='e'||n[i]=='E'||n[i]=='i'||n[i]=='I'||n[i]=='o'||n[i]=='O'||n[i]=='u'||n[i]=='U')
        {
            num_de_vogais++;
        }
    }
    return num_de_vogais;
}
