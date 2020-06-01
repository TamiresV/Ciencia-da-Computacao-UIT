#include <stdio.h>
#include <stdlib.h>

int v[5]={1,2,3,4,5};

int qPares1(int v[],int n)
{
    return qPares2(v,n,0);
}

int qPares2(int v[],int n, int i)
{
    int r=0;
    if(i<n)
    {
        if(v[i]%2==0)
        {
            r++;
        }
        r+=qPares2(v,n,i+1);
    }
    return r;
}

int main(int argc,char**argv)
{
    int r;
    r=qPares1(v,5);
    printf("%d\n",r);
    system("pause");
    return 0;
}
