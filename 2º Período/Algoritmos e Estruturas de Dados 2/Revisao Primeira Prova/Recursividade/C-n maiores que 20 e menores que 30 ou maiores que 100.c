#include <stdio.h>
#include <stdlib.h>

int v[5]={0,20,21,50,103};

int qElementos1(int v[],int n)
{
    return qElementos2(v,n,0);
}
int qElementos2(int v[],int n,int i)
{
    int quant=0;
    if(i<n)
    {
        if((v[i]>20&&v[i]<30)||(v[i]>100))
        {
            quant++;
        }
        quant+=qElementos2(v,n,i+1);
    }
    return quant;
}

int main(int argc,char**argv)
{
    int r;
    r=qElementos1(v,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
