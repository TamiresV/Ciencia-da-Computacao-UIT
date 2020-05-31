#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int num,soma,i,j,numperfeitos,perfeitos[1000];
    printf("Entre com um numero N entre 1 e 1000 e te direi os numeros perfeitos entre 1 e N\n");
    scanf(" %d",&num);
    numperfeitos=0;
    for(i=1;i<=num;i++)
    {
        soma=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                soma+=j;
            }
        }
        if(soma==i)
        {
            perfeitos[numperfeitos]=i;
            numperfeitos++;
        }
    }
    for(i=0;i<numperfeitos;i++)
    {
        printf("%d\n",perfeitos[i]);
    }
    system("pause");
    return 0;
}
