#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int x;
    char c;
    printf("Informe um numero e uma letra\n");
    scanf (" %d %c", &x,&c);
    printf("O valores das variaveis eh %d e %c.\n", x,c);
    system ("pause");
    return 0;
}
