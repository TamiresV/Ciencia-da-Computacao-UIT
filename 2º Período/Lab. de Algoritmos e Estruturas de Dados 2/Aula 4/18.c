#include <stdio.h>
#include <stdlib.h>

int h(int m, int n);

int main(int argc,char**argv)
{
    int m,n;
    printf("Entre com dois numeros\n");
    scanf(" %d %d",&m,&n);
    printf("%d\n",h(m,n));
    return 0;
}

int h(int m, int n)
{
    if(n==1)
    {
        return m+1;
    }
    else if(m==1)
    {
        return n+1;
    }
    else if(m>1||n>1)
    {
        return h(m,n-1)+h(m-1,n);
    }
}
