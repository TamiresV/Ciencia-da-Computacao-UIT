#include <stdio.h>
#include <stdlib.h>

char vet[]={'a',1,2,3,4};

int digitos1(char vet[])
{
    return digitos2(vet,0);
}

int digitos2(char vet[],int i)
{
    int r=0;
    if(vet[i]!='\0')
    {
        if(vet[i]>=0&&vet[i]<=9)
        {
            r++;
            r+=digitos2(vet,i+1);
        }
        else
        {
            r=0;
        }
    }
    return r;
}

int main()
{
    int r;
    r=digitos1(vet);
    printf("%d\n",r);
    system("pause");
    return 0;
}
