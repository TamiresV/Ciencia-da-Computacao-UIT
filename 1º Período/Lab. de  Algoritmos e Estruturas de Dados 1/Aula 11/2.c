#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char palavra[100],inverso[100];
    int i,j,comparar;

    printf("String\n");
    scanf(" %s",palavra);

    i=0;
    while(palavra[i]!='\0')
    {
        i++;
    }
    for(j=0;i>0;j++)
    {
        inverso[j]=palavra[i-1];
        i--;
    }

    comparar=0;
    for(i=0;palavra[i]!='\0';i++)
    {
        if(inverso[i]!=palavra[i])
        {
            comparar=1;
            break;
        }
    }

    if(comparar==0)
    {
        printf("A palavra eh palindromo\n");
    }
    else
    {
        printf("A palavra nao eh palindromo\n");
    }

    system("pause");
    return 0;
}
