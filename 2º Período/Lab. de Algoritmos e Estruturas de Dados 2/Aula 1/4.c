#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num 5

typedef struct{
    char elemento[20];
    float porcentagem;
}solucao;

solucao cadastra_solucao()
{
    solucao x;
    printf("Elemento:\n");
    scanf(" %[^\n]",x.elemento);
    printf("Porcentagem:\n");
    scanf(" %f",&x.porcentagem);
    return x;
}

int verificastring(char x1[20],char x2[20])
{
    int tam1,tam2;
    tam1=strlen(x1);
    tam2=strlen(x2);

    if(tam1>=tam2)
    {
        if(strcmp(x1,x2)<0)
        {
            return 0;
        }
        else if(strcmp(x1,x2)>0)
        {
            return 1;
        }
    }
    else
    {
        if(strcmp(x1,x2)<0)
        {
            return 0;
        }
        else if(strcmp(x1,x2)>0)
        {
            return 1;
        }
    }
    return -1;
}

int main(int argc,char**argv)
{
    solucao v[num],temp;
    int i,j,cont;

    for(i=0;i<num;i++)
    {
        v[i]=cadastra_solucao();
    }

    for(i=0;i<num-1;i++)
    {
        cont=verificastring(v[i].elemento,v[i+1].elemento);
        if(cont==1)
        {
            temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }
        for(j=i;j>0;j--)
        {
            cont=verificastring(v[j].elemento,v[j-1].elemento);
            if(cont==0)
            {
                temp=v[j];
                v[j]=v[j-1];
                v[j-1]=temp;
            }
            else
            {
                j=0;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%s : %.2f\n",v[i].elemento,v[i].porcentagem);
    }
    system("pause");
    return 0;
}
