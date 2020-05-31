#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    int i,fat=1;
    for(i=1;i<=n;i++)
    {
        fat*=i;
    }
    return fat;
}

int main(int argc,char**argv)
{
    int num;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    printf("%d\n",fatorial(num));
    system("pause");
    return 0;
}
