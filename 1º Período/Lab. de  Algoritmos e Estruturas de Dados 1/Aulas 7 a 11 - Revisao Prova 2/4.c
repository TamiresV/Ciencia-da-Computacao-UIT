#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(int argc,char**argv)
{
    int m[5][5],i,j,linha,col,lin_enc=0,col_enc=0;
    srand(time(NULL));
    printf("Matriz gerada\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            m[i][j]=rand()%2;
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<5;i++)
    {
        linha=0;
        for(j=0;j<5;j++)
        {
            if(m[i][j]%2==0)
            {
                linha++;
            }
        }
        if(linha==5)
        {
            lin_enc++;
        }
    }

    for(i=0;i<5;i++)
    {
        col=0;
        for(j=0;j<5;j++)
        {
            if(m[j][i]%2==0)
            {
                col++;
            }
        }
        if(col==5)
        {
            col_enc++;
        }
    }

    printf("A matriz possui %d linha(s) e %d coluna(s) nula(s)",lin_enc,col_enc);
    system("pause");
    return 0;
}
