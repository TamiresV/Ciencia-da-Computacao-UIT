#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char prim[100],seg[100];
    int i,resultado;

    printf("Primeira palavra\n");
    scanf(" %s",prim);

    printf("Segunda palavra\n");
    scanf(" %s",seg);


    for(i=0;;i++)
    {
        if (prim[i]=='\0'&&seg[i]=='\0')
        {
            resultado=0;
            break;
        }
        else if((prim[i]<seg[i])||(prim[i]=='\0'))
        {
            resultado=-1;
            break;
        }
        else if((seg[i]<prim[i])||(seg[i]=='\0'))
        {
            resultado=1;
            break;
        }
    }
    printf("Resultado %d\n",resultado);
    system("pause");
    return 0;
}
