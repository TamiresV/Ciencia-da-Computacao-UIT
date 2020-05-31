#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(int argc,char**argv)
{
    int num,a,x,cara,coroa;
    cara = 0;
    coroa = 0;
    srand(time(NULL));
    printf("Forneca um numero de lancamento de moedas\n");
    scanf(" %d",&num);
    for (a=1;a<=num;a++)
    {
        x = rand ()% 2+1;
        if (x==1)
        {
            coroa++;
        }
        else
        {
            cara++;
        }
    }
    printf("Foram obtidas %d caras e %d coroas\n",cara,coroa);
    system("pause");
    return 0;
}
