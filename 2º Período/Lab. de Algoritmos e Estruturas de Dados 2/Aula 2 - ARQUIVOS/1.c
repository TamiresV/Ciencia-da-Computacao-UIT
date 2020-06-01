#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    FILE*f=fopen("teste.txt","r");
    int c,cont=0;
    c=fgetc(f);
    while(!feof(f))
    {
        c=fgetc(f);
        if(f!=NULL)
        {
            cont++;
        }
    }
    printf("%d\n",cont);
    fclose(f);
    return 0;
}
