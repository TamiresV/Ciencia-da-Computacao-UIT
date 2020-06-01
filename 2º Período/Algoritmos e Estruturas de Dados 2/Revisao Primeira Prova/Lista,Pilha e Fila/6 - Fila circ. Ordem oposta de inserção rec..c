#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 6

int v[5]={0,1,2,3,4};

void ordemInsercao(int v[],int p,int u)
{
    if(u!=p)
    {
        printf("%d ",v[u-1]);
        ordemInsercao(v,p,(u-1)%MAXTAM);
    }
}

int main(int argc,char**argv)
{
    ordemInsercao(v,0,5);
    system("pause");
    return 0;
}
