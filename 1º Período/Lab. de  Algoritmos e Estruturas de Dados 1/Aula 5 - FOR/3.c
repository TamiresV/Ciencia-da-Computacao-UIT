#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
    int num,a,fat;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    fat=1;
    for (a=1;a<=num;a++)
    {
        fat=fat*a;
    }
    printf("O fatorial de %d eh: %d\n",num,fat);
    system("pause");
    return 0;
}
