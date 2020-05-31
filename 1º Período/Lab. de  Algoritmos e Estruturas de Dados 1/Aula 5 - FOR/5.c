#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int x,m,n,o;
    printf("Entre com um numero\n");
    scanf(" %d",&x);
    if(x>1)
    {
        for(n=1;n<=x;n++)
        {
            for(m=1; m<=x-n ;m++)
            {
                printf(" ");
            }
            for(o=1;o<=n;o++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("o\n");
    }

    system("pause");
    return 0;
}
