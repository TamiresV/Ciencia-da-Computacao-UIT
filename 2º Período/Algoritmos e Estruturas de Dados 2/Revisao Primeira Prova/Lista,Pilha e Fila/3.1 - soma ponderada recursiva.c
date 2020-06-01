#include <stdio.h>
#include <stdlib.h>

int v[]={1,2,3,4,5};
int MAXTAM=6;

int pondRec(int v[],int p,int u)
{
    int soma=0;
    if(p!=u)
    {
        soma=(v[p]*p)+pondRec(v,(p+1)%MAXTAM,u);
    }
    return soma;
}

int main(int argc,char**argv)
{
    int r;
    r=pondRec(v,0,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
