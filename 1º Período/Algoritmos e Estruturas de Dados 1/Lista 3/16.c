#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{
    char v[100][20];
    int num,i,menor=0,maior=0,a;

    printf("Digite um numero entre 1 e 100 representando o numero de strings\n");
    scanf(" %d",&num);

    printf("Digite as %d strings\n",num);
    for(i=0;i<num;i++)
    {
        scanf(" %s",v[i]);
    }

    for(i=0;i<num;i++)
    {
        if(strcmp(v[menor],v[i])>0)
        {
            menor=i;
        }
        if(strcmp(v[maior],v[i])<0)
        {
            maior=i;
        }
    }
    strcat(v[menor],"_");
    strcat(v[menor],v[maior]);
    a=strlen(v[menor]);
    printf("%s %d\n",v[menor],a);
    system("pause");
    return 0;
}
