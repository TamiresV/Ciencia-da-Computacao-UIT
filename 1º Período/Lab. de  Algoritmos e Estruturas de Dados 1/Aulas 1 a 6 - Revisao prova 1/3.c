#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int x;
    while(1)
    {
        printf("Entre com um numero\n");
        scanf(" %d",&x);
        if(x<0)
        {
            break;
        }
        if(x%2==0)
        {
            printf("O numero %d eh par!\n",x);
        }
        else
        {
            printf("O numero %d eh impar\n",x);
        }
    }
    system("pause");
    return 0;
}
