#include<stdio.h>
#include<stdlib.h>

int fatorial1(int n)
{
    return fatorial2(n,1);
}

int fatorial2(int n,int i)
{
    int r=1;
    if(i<=n)
    {
        r=i*fatorial2(n,i+1);
    }
    return r;
}

int main(int argc,char**argv)
{
    int r;
    r=fatorial1(3);
    printf("%d\n",r);
    system("pause");
    return 0;
}
