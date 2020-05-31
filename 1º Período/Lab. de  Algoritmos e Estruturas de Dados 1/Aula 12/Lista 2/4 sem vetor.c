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
    int i,n,maior,menor;
    printf("Entre com 10 numeros inteiros\n");
    for(i=0;i<10;i++)
    {
        scanf(" %d",&n);
        if(i==0)
        {
            maior=n;
            menor=n;
        }
        else if(n>maior)
        {
            maior=n;
        }
        else if(n<menor)
        {
            menor=n;
        }
    }
    printf("%d %d\n",maior,menor);
    return;
}
