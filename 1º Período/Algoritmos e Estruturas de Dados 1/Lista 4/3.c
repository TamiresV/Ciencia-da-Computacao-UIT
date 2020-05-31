#include <stdio.h>
#include <stdlib.h>

int e_primo(int n)
{
    int i,div=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            div++;
        }
    }
    if(div==2)
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
    printf("%d\n",e_primo(num));
    system("pause");
    return 0;
}
