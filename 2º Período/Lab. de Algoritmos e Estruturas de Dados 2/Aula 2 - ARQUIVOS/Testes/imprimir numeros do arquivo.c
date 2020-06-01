#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    FILE*f=fopen("teste.txt","r");
    int i;
    while(fscanf(f,"%d",&i)==1)
    {
        printf("%d\n",i);
    }
    fclose(f);
    return 0;
}
