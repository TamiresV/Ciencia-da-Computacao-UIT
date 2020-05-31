#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int i,div,numdiv,n,primos[1000],numprimos;
    printf("Entre com um numero N e direi os numeros primos de 1 a N\n");
    scanf(" %d",&n);
    numprimos=0;
    for(i=1;i<=n;i++)//DESCOBRI SE O NUMERO EH PRIMO
    {
        numdiv=0;
        for(div=1;div<=i;div++)
        {
            if(i%div==0)
            {
                numdiv++;
            }
        }
        if(numdiv==2)
        {
            primos[numprimos]=i;
            numprimos++;
        }
    }
    for(i=0;i<numprimos;i++)
    {
        printf("%d\n",primos[i]);
    }
    system("pause");
    return 0;
}
