#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char**argv)
{
    char v1[100],v2[100];
    int x;
    scanf(" %s",v1);
    scanf(" %s",v2);
    x=strcmp(v1,v2);
    printf ("%d",x);
    system("pause");
    return 0;
}
