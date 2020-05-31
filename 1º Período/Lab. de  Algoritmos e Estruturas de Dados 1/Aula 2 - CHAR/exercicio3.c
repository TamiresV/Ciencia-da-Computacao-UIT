#include<stdio.h>
#include<stdlib.h>
int main (int agrc, char ** argv)
{
    float f, c;
    printf("Forneca uma temperatura em Fahrenheit \n");
    scanf(" %f", &f);
    c = (f - 32)*5/9;
    printf(" %.2f F = %.2f C \n", f,c);
    system ("pause");
    return 0;
}
