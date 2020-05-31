#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int linha,coluna,x;
    printf("Entre com um numero\n");
    scanf(" %d",&x);
    for(linha=0;linha<x;linha++)
    {
        for (coluna=0;coluna<x;coluna++)
        {
            if(coluna==x-1||linha==x-1||coluna+linha==x-1)
            {
                printf("o");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
