#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    float c1[5],c2[5],soma[5];
    int i;
    printf("Vetor 1:\n");
    for(i=0;i<5;i++)
    {
        scanf(" %f",&c1[i]);
    }
    printf("Vetor 2:\n");
    for(i=0;i<5;i++)
    {
        scanf(" %f",&c2[i]);
    }
    printf("Vetor soma:\n");
    for(i=0;i<5;i++)
    {
        soma[i]=c1[i]+c2[i];
        printf("%.1f\n",soma[i]);
    }
    system("pause");
    return 0;
}
