#include <stdio.h>
#include <stdlib.h>

int v[]={15,3,7,35,23};

int maior1(int v[],int n)
{
    return maior2(v,n,0);
}
int maior2(int v[],int n,int i)
{
    int resp;
    if(i==n-1)
    {
        resp=v[n-1];
    }
    else
    {
        resp=maior2(v,n,i+1);
        if(resp<v[i])
        {
            resp=v[i];
        }
    }
    return resp;
}
int main()
{
    int r;
    r=maior1(v,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
