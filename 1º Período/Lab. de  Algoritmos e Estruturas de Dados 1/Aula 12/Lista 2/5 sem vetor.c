#include <stdio.h>
#include <stdlib.h>

int calcula_media();

int main(int argc,char**argv)
{
    printf("A media eh:%d\n",calcula_media());
    system("pause");
    return 0;
}

int calcula_media()
{
    int i,n,soma=0,media;
    printf("Entre com os 10 valores\n");
    for(i=0;i<10;i++)
    {
        scanf(" %d",&n);
        soma+=n;
    }
    media=soma/10;
    return media;
}
