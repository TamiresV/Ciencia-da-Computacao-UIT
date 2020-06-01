#include <stdio.h>
#include <stdlib.h>

void minha_strcpy(char *p1,char *p2);//PROTOTIPO
int minha_strlen(char *p);

int main(int argc,char**argv)
{
	char s1[]="Algoritmo";
	char s2[10];
	minha_strcpy(s2,s1);
	printf("String copiada: %s\nTamanho: %d\n", s2,minha_strlen(s2));
	system("pause");
	return 0;
}

void minha_strcpy(char *p2,char *p1)
{
    while(*p1!='\0')
    {
        *p2=*p1;
        p2++;
        p1++;
    }
    *p2='\0';
}

int minha_strlen(char *p)
{
    int cont=0;
    while(*p!='\0')
    {
        cont++;
        p++;
    }
    return cont;
}
