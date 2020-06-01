#include <stdio.h>
#include <stdlib.h>

int elevado1(int k,int n)
{
    return elevado2(k,n,1);
}

int elevado2(int k,int n,int i)
{
    int r=1;
    if(i<=n)
    {
        r=k*elevado2(k,n,i+1);
    }
    return r;
}

int main(int argc,char**argv)
{
    int r;
    r=elevado1(6,2);
    printf("%d\n",r);
    return 0;
}
