#include <stdio.h>
#include <stdlib.h>

int tamanho_string(char s1[])
{
    char *p;
    p=s1;
    int cont=0;
    while(*p!='\0')
    {
        cont++;
        p++;
    }
    return cont;
}

int main(int argc,char**argv)
{
	char s1[100]="";
	printf("Digite a cadeia de caracteres: ");
	gets(s1);
	int tamanho = tamanho_string(s1);
	printf("Tamanho da cadeia: %d\n", tamanho);
	system("pause");
	return 0;
}
