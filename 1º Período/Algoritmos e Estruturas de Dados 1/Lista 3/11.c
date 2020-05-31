#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char prim[100],seg[100];
    int i,j;

    printf("Primeira palavra\n");
    scanf(" %s",prim);

    printf("Segunda palavra\n");
    scanf(" %s",seg);

    i=0;
    while(prim[i]!='\0')
    {
        i++;
    }

    for(j=0;seg[j]!='\0';j++)
    {
        prim[i]=seg[j];
        i++;
    }
    prim[i]='\0';
    printf("%s\n",prim);
    system("pause");
    return 0;
}
