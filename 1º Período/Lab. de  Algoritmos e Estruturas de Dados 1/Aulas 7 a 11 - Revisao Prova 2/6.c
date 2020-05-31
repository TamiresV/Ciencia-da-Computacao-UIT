#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int i,notas[10][3],faltas[10],j,soma[100];
    int aprov=0;
    for(i=0;i<10;i++)
    {
        printf("Forneca as 3 notas e o numero de faltas do aluno %d\n",i);
        for(j=0;j<3;j++)
        {
            scanf("%d",&notas[i][j]);
        }
        scanf("%d",&faltas[i]);
    }

    for(i=0;i<10;i++)
    {
        soma[i]=0;
        for(j=0;j<3;j++)
        {
            soma[i]+=notas[i][j];
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<3;j++)
        {
            if(notas[i][j]!=0)
            {
                if((soma[i]>95)||
                   (soma[i]>=60&&faltas[i]<=7)
                   ||(soma[i]>=55&&faltas[i]==0))
                {
                    aprov++;
                    break;
                }
            }
        }
    }

    printf("%d\n",aprov);
    system("pause");
    return 0;
}
