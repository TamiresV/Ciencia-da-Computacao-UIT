#include <stdio.h>
#include <stdlib.h>

void retangulo (int a,int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("o ");
        }
        printf("\n");
    }
}

int main(int argc,char**argv)
{
    int a,b;
    printf("Entre com dois numeros\n");
    scanf(" %d %d",&a,&b);
    retangulo(a,b);
    system("pause");
    return 0;
}
