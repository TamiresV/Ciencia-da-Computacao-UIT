#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    int i,j;
    char p[10];

    FILE*f=fopen("arquivo.txt","w+");

    printf("Digite 10 caracteres:\n");
    for(i=0;i<10;i++)
    {
        scanf(" %c",&p[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            fprintf(f,"%c",p[i]);
        }
        fprintf(f,"\n");
    }
    fclose(f);

    FILE*g=fopen("arquivo.txt","r");
    char palavra[100];
    while(fgets(palavra,100,g)!=NULL)
    {
        printf("%s",palavra);
    }
    fclose(g);

    system("pause");
    return 0;
}
