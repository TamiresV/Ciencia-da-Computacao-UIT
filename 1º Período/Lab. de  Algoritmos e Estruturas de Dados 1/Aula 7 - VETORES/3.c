#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(int argc,char**argv)
{
    int num,i,enc;
    srand(time(NULL));
    int vetor[10];

    printf("Digite o numero a ser procurado no vetor\n");
    scanf(" %d",&num);

    printf("Vetor gerado:\n");
    for(i=0;i<10;i++)
    {
        vetor [i] = rand()%20;
        printf("%d\n",vetor[i]);
    }
    enc=0;
    for (i=0;i<10;i++)
    {
        if(vetor[i]==num)
        {
            enc=1;
            printf("O numero %d esta no vetor, na posicao de numero %d\n",num,i);
        }
    }
    if(enc==0)
    {
        printf("O numero %d nao esta no vetor\n",num);
    }
    system("pause");
    return 0;
}
