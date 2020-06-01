#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int somaNcubos1(int n)
{
    return somaNcubos2(n,1);
}

int somaNcubos2(int n,int i)
{
    int r=0;
    if(i<=n)
    {
        r=pow(i,3)+somaNcubos2(n,i+1);
    }
    return r;
}

int main (int argc,char**argv)
{
    int r;
    r=somaNcubos1(3);
    printf("%d\n",r);
    system("pause");
    return 0;
}
