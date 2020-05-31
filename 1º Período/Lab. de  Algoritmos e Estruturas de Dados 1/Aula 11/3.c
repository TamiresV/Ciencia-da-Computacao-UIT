#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc,char**argv)
{
    int m[5][5],i,j;
    srand(time(NULL));

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",m[i][j]=rand()%9);
        }
        printf("\n");
    }

    printf("\n\n\n");

    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
