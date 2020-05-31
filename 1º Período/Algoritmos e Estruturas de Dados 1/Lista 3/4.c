#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int num,soma,i,j,numperfeitos,perfeitos[1000];
    printf("Entre com um numero(N) entre 1 e 1000 e te direi os N numeros perfeitos\n");
    scanf(" %d",&num);
    numperfeitos=0;
    for(i=1;numperfeitos<num;i++)
    {
        soma=0;
        for(j=1;j<i;j++)//SOMA TOSO OS DIVISORES ATE O NUMERO
        {
            if(i%j==0)
            {
                soma+=j;
            }
        }
        if(soma==i)//VE SE EH NUMERO PERFEITO
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
