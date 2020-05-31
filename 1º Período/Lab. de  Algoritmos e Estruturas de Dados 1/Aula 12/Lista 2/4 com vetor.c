#include <stdio.h>
#include <stdlib.h>

void maior_e_menor ();

int main(int argc,char**argv)
{
    maior_e_menor();
    system("pause");
    return 0;
}

void maior_e_menor()
{
    int i,v[10],maior,menor;
    printf("Entre com 10 numeros inteiros\n");
    for(i=0;i<10;i++)
    {
        scanf(" %d",&v[i]);
    }
    maior=v[0];
    menor=v[0];
    for(i=1;i<10;i++)
    {
        if(v[i]>maior)
        {
            maior=v[i];
        }
        if(v[i]<menor)
        {
            menor=v[i];
        }
    }
    printf("%d %d\n",maior,menor);
    return;
}
