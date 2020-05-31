#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int v[10][10],i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            v[i][j]=i*j;
        }
    }
    printf("Matriz gerada:\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%3d ",v[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
