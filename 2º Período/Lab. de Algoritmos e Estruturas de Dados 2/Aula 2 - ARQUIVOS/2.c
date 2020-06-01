#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[51];
    float nota1;
    float nota2;
    float nota3;
    float media;
}aluno;

float media(float nota1, float nota2, float nota3)
{
    float media;
    media=(nota1+nota2+nota3)/3;
    return media;
}

int main(int argc,char**argv)
{
    aluno aluno[10];
    int i,n;
    FILE*f=fopen("teste.txt","r");
    if(f==NULL)
    {
        printf("Arquivo nao encontrado\n");
        return 0;
    }
    fscanf(f," %d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(f," %[^\n]",aluno[i].nome);
        fscanf(f," %f",&aluno[i].nota1);
        fscanf(f," %f",&aluno[i].nota2);
        fscanf(f," %f",&aluno[i].nota3);
    }
    for(i=0;i<n;i++)
    {
        aluno[i].media=media(aluno[i].nota1,aluno[i].nota2,aluno[i].nota3);
        printf("%s\n",aluno[i].nome);
        printf("%.2f\n",aluno[i].media);
        if(aluno[i].media>=8.5)
        {
            printf("Excelente\n");
        }
        else if(aluno[i].media>=7.0&&aluno[i].media<8.5)
        {
            printf("Bom\n");
        }
        if(aluno[i].media<7.0)
        {
            printf("Preocupante\n");
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}
