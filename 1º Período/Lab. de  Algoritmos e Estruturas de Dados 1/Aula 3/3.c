#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char a;
    printf("Forneca um caracter\n");
    scanf(" %c", &a);
    printf("O codigo da tabela ASCII do caracter eh: %d\n",a);
    system("pause");
    return 0;
}
