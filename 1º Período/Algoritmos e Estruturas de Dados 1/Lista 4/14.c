#include <stdio.h>
#include <stdlib.h>

void imprime_quantos_primos (int n)
{
    int i,j,div,p=0;
    for(i=1;i<=n;i++)
    {
        div=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                div++;
            }
        }
        if(div==2)
        {
            p++;
        }
    }
    printf("%d\n",p);
    return;
}

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    imprime_quantos_primos(num);
    system("pause");
    return 0;
}
