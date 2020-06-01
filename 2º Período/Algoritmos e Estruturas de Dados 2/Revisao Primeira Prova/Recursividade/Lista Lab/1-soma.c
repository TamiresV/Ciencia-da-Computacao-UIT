#include <stdio.h>
#include <stdlib.h>

int soma1(int n)
{
    return soma2(n,1);
}

int soma2(int n,int i)
{
    int r=0;
    if(i<=n)
    {
        r=i+soma2(n,i+1);
    }
    return r;
}

int main()
{
    int r;
    r=soma1(2);
    printf("%d\n",r);
    system("pause");
    return 0;
}
