#include <stdio.h>
#include <stdlib.h>

int e_perfeito(int n)
{
    int i,soma=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            soma+=i;
        }
    }
    if(soma==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    printf("%d\n",e_perfeito(num));
    system("pause");
    return 0;
}
