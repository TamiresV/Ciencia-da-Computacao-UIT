#include <stdio.h>
#include <stdlib.h>

void retangulovazado (int a,int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==0||i==a-1||j==0||j==b-1)
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
    int a,b;
    printf("Entre com dois numeros\n");
    scanf(" %d %d",&a,&b);
    retangulovazado(a,b);
    system("pause");
    return 0;
}
