#include <stdio.h>
#include <stdlib.h>

int e_par (int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    printf("%d\n",e_par(num));
    system("pause");
    return 0;
}
