#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    int a,b,c,d;
    printf("Entre com quatro numeros\n");
    scanf(" %d %d %d %d",&a,&b,&c,&d);
    if((a+b>c&&a+c>b&&b+c>a)||(a+b>d&&a+d>b&&b+d>a)||(b+c>d&&b+d>c&&c+d>b))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    system("pause");
    return 0;
}
