#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
    int num,fat;
    printf("Entre com um numero\n");
    scanf(" %d",&num);
    fat = 1;
    while(num>=1)
    {
        fat=fat*num;
        num--;
    }
    printf("O fatorial de %d eh: %d\n",num,fat);
    system("pause");
    return 0;
}
