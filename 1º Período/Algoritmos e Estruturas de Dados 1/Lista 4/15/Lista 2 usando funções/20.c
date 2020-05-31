#include <stdio.h>
#include <stdlib.h>

void triangulovazado(int a)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==a-1||j==0||i==j)
            {
                printf("o ");
            }
            else
            {
                printf("  ");
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
    triangulovazado(a);
    system("pause");
    return 0;
}
