#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char**argv)
{
    int num,i;
    char v[100][20];
    printf("Numero de palavras\n");
    scanf(" %d",&num);
    printf("Forneca as palavras\n");
    for(i=0;i<num;i++)
    {
        scanf(" %s",v[i]);
    }
    for(i=1;i<num;i++)
    {
        strcat(v[0],v[i]);
    }
    printf("%s\n",v[0]);
    system("pause");
    return 0;
}
