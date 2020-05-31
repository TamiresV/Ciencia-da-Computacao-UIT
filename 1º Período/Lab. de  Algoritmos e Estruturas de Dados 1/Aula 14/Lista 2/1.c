#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float a;
    float b;
}COMPLEXOS;

void printcomplexo(COMPLEXOS x)
{
    printf("%.2f+%.2fi\n",x.a,x.b);
}

COMPLEXOS somaComplexos(COMPLEXOS x,COMPLEXOS y)
{
    COMPLEXOS result;
    result.a=x.a+y.a;
    result.b=x.b+y.b;
    return result;
}

int main(int argc,char**argv)
{
    COMPLEXOS x,y,result;
    printf("Forneca a parte real e imaginaria de um numero complexo\n");
    scanf(" %f %f",&x.a,&x.b);
    printf("Forneca a parte real e imaginaria de um numero complexo\n");
    scanf(" %f %f",&y.a,&y.b);
    result=somaComplexos(x,y);
    printcomplexo(result);
    system("pause");
    return 0;
}
