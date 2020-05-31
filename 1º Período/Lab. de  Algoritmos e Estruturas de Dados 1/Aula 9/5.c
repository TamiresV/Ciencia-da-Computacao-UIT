#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc,char**argv)
{
    int m[5][5],inv[5][5];
    int i,j,enc;
    srand(time(NULL));
    printf("Matriz gerada\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3.d ",m[i][j]=rand()%100+1);
        }
        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            inv[i][j]=m[4-i][4-j];
        }
    }

    enc=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(inv[i][j]==m[i][j])
            {
                enc++;
            }
        }
    }
    if(enc>1)
    {
        printf("Numeros repetidos\n");
    }
    else
    {
        printf("Nao tem numeros repetidos\n");
    }
    system("pause");
    return 0;
}
