#include <stdio.h>
#include <stdlib.h>

int v[]={1,2,3,4,5};
int MAXTAM=6;

int mult(int v[],int p,int u)
{
    int i,r=1;
    for(i=p;i!=u;i=(i+1)%MAXTAM)
    {
        r*=v[i];
    }
    return r;
}

int main(int argc,char**argv)
{
    int r;
    r=mult(v,0,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
