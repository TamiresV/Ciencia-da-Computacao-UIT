#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{
    char nome1[80]="paulo";
    char nome2[80]="souza";
    strcat(nome1,nome2);
    puts(nome1);
    system("pause");
    return 0;
}
