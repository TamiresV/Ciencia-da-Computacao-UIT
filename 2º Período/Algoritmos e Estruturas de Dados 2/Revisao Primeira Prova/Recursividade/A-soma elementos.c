#include <stdio.h>
#include <stdlib.h>

int v[5]={1,2,3,4,5};

int soma1(int v[],int n)
{
    return soma2(v,n,0);
}
int soma2(int v[],int n,int i)
{
    int somat=0;
    if(i<n)
    {
        somat=v[i]+soma2(v,n,i+1);
    }
    return somat;
}

int main(int argc,char**argv)
{
    int r;
    r=soma1(v,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
