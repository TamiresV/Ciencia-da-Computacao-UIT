#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc,char**argv)
{
    int matriz[5][5],inversa[5][5];
    int i,j,lin,col,a;
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3.d ",matriz[i][j]=rand()%100+1);
        }
        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a=0;
            for(lin=5;lin>0;lin--)
            {
                for(col=5;col>0;col--)
                {
                    inversa[lin-1][col-1]=matriz[i][j];
                    if(matriz[i][j]==inversa[lin-1][col-1])
                    {
                        a++;
                    }
                }
            }
        }
    }
    if(a>1)
    {
        printf("A matriz gerada possui elementos repetidos\n");
    }

    system("pause");
    return 0;
}
