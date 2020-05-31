#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int i,j;
    int matriz [15][15];
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
           matriz[i][j]=i*j;
        }
    }

    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
