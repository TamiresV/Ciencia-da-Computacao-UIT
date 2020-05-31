#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc,char**argv)
{
    int m[5][5];
    int i,j,soma;
    soma=0;
    srand(time(NULL));
    printf("Matriz gerada\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            m[i][j]=rand()%5+5;
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                soma+=m[i][j];
            }
        }
    }
    printf("A soma da diagonal da matriz eh:%d\n",soma);
    system("pause");
    return 0;
}
