#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char prim[101],seg[101];
    int i;

    printf("Primeira palavra\n");
    scanf(" %s",prim);

    printf("Segunda palavra\n");
    scanf(" %s",seg);

    for(i=0;seg[i]!='\0';i++)
    {
        prim[i]=seg[i];
    }
    prim[i]='\0';
    printf("Primeira:%s\n",prim);
    printf("Segunda:%s\n",seg);
    system("pause");
    return 0;
}
