#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{
    char v[100][20],x[20];
    int num,i,comp=0;

    printf("Digite um numero entre 1 e 100 representando o numero de strings\n");
    scanf(" %d",&num);

    printf("Digite as %d strings\n",num);
    for(i=0;i<num;i++)
    {
        scanf(" %s",v[i]);
    }
    printf("Digite outra string\n");
    scanf(" %s",x);

    for(i=0;i<num;i++)
    {
        if(strcmp(v[i],x)==0)
        {
            comp=1;
            printf("%d\n",i);
        }
    }
    if(comp==0)
    {
        printf("-1\n");
    }
    system("pause");
    return 0;
}
