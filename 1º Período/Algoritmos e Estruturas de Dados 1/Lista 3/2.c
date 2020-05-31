#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int num,div,primo,i;
    int a,b;
    int primos[1000];
    printf("Entre com um numero(N) de um a mil e direi os N numeros primos\n");
    scanf(" %d",&num);
    primo=0;
    for(a=1;primo<num;a++)
    {
        div=0;
        for(b=1;b<=a;b++)
        {
            if(a%b==0)
            {
                div++;
            }
        }
        if(div==2)
        {
            primos[primo]=a;
            primo++;
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d\n",primos[i]);
    }
    system("pause");
    return 0;
}
