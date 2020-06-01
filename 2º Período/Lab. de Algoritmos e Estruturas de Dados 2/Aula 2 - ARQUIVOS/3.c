#include <stdio.h>
#include <stdlib.h>

typedef struct _aluno
{
    char nome[51];
    float nota1, nota2, nota3;
}Aluno;

int main(int argc,char**argv)
{
    Aluno aluno[4];
    int i,n;
    FILE*f=fopen("teste.txt","r");
    FILE*g=fopen("teste2.txt","wb");
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
        fprintf(g,"%s \n",aluno[i].nome);
        fprintf(g,"%.2f \n",aluno[i].nota1);
        fprintf(g,"%.2f \n",aluno[i].nota2);
        fprintf(g,"%.2f \n",aluno[i].nota3);
        fprintf(g,"\n");
    }
    printf("Fim\n");
    fclose(f);
    fclose(g);
    system("pause");
    return 0;
}
