#include <stdio.h>
#include <stdlib.h>

void anexandotexto (char a[100],char b[100])
{
    FILE*f=fopen(a,"a");
    fprintf(f,b);
    fprintf(f,"\n");
    fclose(f);
}
