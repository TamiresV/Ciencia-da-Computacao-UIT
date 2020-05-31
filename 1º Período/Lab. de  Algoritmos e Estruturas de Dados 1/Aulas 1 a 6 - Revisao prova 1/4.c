#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int n, ultimo =1, penultimo=1, termo, count;
    int i;
    termo=6;
    printf("+\n+\n");
    for(count=3;count<=termo;count++)
    {
        n=ultimo+penultimo;
        penultimo=ultimo;
        ultimo=n;
        i=ultimo;
        while(i>0)
        {
            printf("+");
            i--;
        }
        if((ultimo-penultimo)%2==0)
        {
            printf(" p");
        }
        else
        {
            printf(" i");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
