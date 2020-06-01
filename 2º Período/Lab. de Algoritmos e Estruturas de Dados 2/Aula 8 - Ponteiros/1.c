#include <stdio.h>
#include <stdlib.h>

void calculos(int a,int b,int c,int *pmax,double *pmed);

int main(int argc,char**argv)
{
	int a,b,c,maximo;
	double media;
	system("cls");
	printf("Digite o valor de a: ");
	scanf(" %d",&a);
	printf("Digite o valor de b: ");
	scanf(" %d",&b);
	printf("Digite o valor de c: ");
	scanf(" %d",&c);

	calculos(a,b,c,&maximo,&media);

	printf("Media: %.2f\n", media);
	printf("Maximo: %d\n", maximo);

	system("pause");
	return 0;
}

void calculos(int a,int b,int c,int *pmax,double *pmed)
{
    *pmed=(a+b+c)/3;
    if(a>b&&a>c)
    {
        *pmax=a;
    }
    else if(b>a&&b>c)
    {
        *pmax=b;
    }
    else
    {
        *pmax=c;
    }
}
