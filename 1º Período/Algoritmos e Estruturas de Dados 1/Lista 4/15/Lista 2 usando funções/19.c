#include <stdio.h>
#include <stdlib.h>

void triangulo (int a)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(j<=i)
            {
                printf("o ");
            }
        }
        printf("\n");
    }
}

int main(int argc,char**argv)
{
    int a;
    printf("Entre com um numero\n");
    scanf(" %d",&a);
    triangulo(a);
    system("pause");
    return 0;
}
