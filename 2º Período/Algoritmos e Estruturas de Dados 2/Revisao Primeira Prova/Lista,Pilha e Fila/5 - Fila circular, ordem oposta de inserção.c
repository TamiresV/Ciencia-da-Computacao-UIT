#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 6

int v[5]={0,1,2,3,4};

void ordemInsercao(int v[],int p,int u)
{
    int i;
    for(i=u;i!=p;i=(i-1)%MAXTAM)
    {
        printf("%d ",v[i-1]);
    }
}

int main()
{
    ordemInsercao(v,0,5);
    system("pause");
    return 0;
}
