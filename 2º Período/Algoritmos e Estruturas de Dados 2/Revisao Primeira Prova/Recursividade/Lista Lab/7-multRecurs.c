#include <stdio.h>
#include <stdlib.h>

int somaRec1(int n1,int n2)
{
    return somaRec2(n1,n2,1);
}

int somaRec2(int n1,int n2,int i)
{
    int r=0;
    if(i<=n2)
    {
        r=n1+somaRec2(n1,n2,i+1);
    }
    return r;
}

int main(int argc,char**argv)
{
    int r;
    r=somaRec1(2,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
