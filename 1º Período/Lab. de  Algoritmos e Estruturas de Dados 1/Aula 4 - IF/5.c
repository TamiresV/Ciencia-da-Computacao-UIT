#include <stdio.h>
#include <stdlib.h>
int main(int arc,char**argv)
{
    int a,b,c;
    printf("Forneca os 3 lados do triangulo\n");
    scanf(" %d %d %d",&a,&b,&c);
    if(a>=b+c || b>=a+c || c>=a+b)
    {
        printf("O triangulo fornecido eh invalido\n");
    }
    else if (a==b && b==c)
    {
        printf("O triangulo fornecido eh valido e equilatero\n");
    }
    else if (a==b||a==c||b==c)
    {
        printf("O triangulo fornecido eh valido e isosceles\n");
    }
    else
    {
        printf("O triangulo  fornecido eh valido e escaleno\n");
    }
    system("pause");
    return 0;
}
