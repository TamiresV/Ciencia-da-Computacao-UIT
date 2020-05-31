#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int ano,a;
    printf("Entre com um ano qualquer\n");
    scanf(" %d",&ano);
    for(a=0;a<=ano;a++)
    {
        if(a%4==0)
        {
            printf("%d\n",a);
        }
    }
    system("pause");
    return 0;
}
