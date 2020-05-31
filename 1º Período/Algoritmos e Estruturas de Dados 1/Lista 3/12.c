#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char prim[100],seg[100],terc[100];
    int i,j;

    printf("Primeira String:\n");
    scanf(" %s",prim);

    printf("Segunda String:\n");
    scanf(" %s",seg);

    printf("Terceira String\n");
    scanf(" %s",terc);

    i=0;
    while(terc[i]!='\0')
    {
        i++;
    }
    for(j=0;seg[j]!='\0';j++)
    {
        terc[i]=seg[j];
        i++;
    }
    for(j=0;prim[j]!='\0';j++)
    {
        terc[i]=prim[j];
        i++;
    }
    terc[i]='\0';
    puts(terc);

    system("pause");
    return 0;
}
