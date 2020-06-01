#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    int vetor[3]={5,10,15};

    int *ponteiro=&vetor[0];
    printf("%d\n",*ponteiro);

    ponteiro=&vetor[1];
    printf("%d\n",*ponteiro);

    ponteiro=&vetor[2];
    printf("%d\n",*ponteiro);

    ponteiro=&vetor[0];
    ++ponteiro;
    printf("%d\n",*ponteiro);


    system("pause");
    return 0;
}
