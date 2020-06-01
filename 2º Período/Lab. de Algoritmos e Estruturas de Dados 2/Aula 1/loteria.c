#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    int joel[6],sort[6];
    int i,j,cont=0;

    printf("Aposta de Joel:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&joel[i]);
    }

    printf("Numeros sorteados:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&sort[i]);
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(joel[i]==sort[j])
            {
                cont++;
                break;
            }
        }
    }

    if(cont==6)
    {
        printf("Sena\n");
    }
    else if(cont==5)
    {
        printf("Quina\n");
    }
    else if(cont==4)
    {
        printf("Quadra\n");
    }
    else if(cont==3)
    {
        printf("Terno\n");
    }
    else
    {
        printf("Azar\n");
    }

    system("pause");
    return 0;
}
