#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc,char**argv)
{
    int m[100][100],aux1[100],aux2[100],i,j;
    srand(time(NULL));

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%3d ",m[i][j]=rand()%50);
        }
        printf("\n");
    }

    printf("\n\n\n");
    for(i=0;i<10;i++)//ARMAZENA A LINHA 3 EM 1 VETOR AUXILIAR;
    {
        aux1[i]=m[3][i];
    }

    for(i=0;i<10;i++)//ARMAZENA A COLUNA 5 EM 1 VETOR AUXILIAR;
    {
        aux2[i]=m[i][5];
    }


    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if (m[3][j])
            {
                m[3][j]=aux1[i];
            }
            else if(m[i][5])
            {
                m[i][5]=aux2[i];
            }
            printf(" %2d",m[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
