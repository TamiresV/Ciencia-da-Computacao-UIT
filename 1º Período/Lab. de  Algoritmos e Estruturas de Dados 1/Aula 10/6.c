#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int m[4][4],i,j,k,a,soma;
    printf("Entre com os elementos da matriz\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf(" %d",&m[i][j]);
        }
    }
    k=0;
    for(i=0;i<4;i++)
    {
        a=0;
        soma=0;
        for(j=0;j<4;j++)
        {
            soma+=m[i][j];
            if(m[i][j]!=0&&m[i][j]!=1)
            {
                k=1;
                break;
            }
            else if(soma!=1)
            {
                a++;
                break;
            }
        }
    }
    if(k==0||a==0)
    {
        printf("A matriz fornecida eh de permutacao\n");
    }
    else
    {
        printf("A matriz fornecida nao eh de permutacao\n");
    }
    system("pause");
    return 0;
}
