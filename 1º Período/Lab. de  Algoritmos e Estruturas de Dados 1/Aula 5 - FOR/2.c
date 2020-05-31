#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    float joao, joaquim,anos;
    joao = 1.5;
    joaquim = 1.10;
    anos=0;
    while (joaquim<=joao)
    {
        joaquim = joaquim + 0.03;
        joao = joao + 0.02;
        anos++;
    }
    printf("%.2f\n", anos);
    system("pause");
    return 0;
}
