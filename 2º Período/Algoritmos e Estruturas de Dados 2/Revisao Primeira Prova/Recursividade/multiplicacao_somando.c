#include <stdio.h>
#include <stdlib.h>

int multSoman1(int m,int n)
{
    return multSoman2(m,n,1);
}
int multSoman2(int m,int n,int i)
{
    int r=0;
    if(i<=n)
    {
        r=m+multSoman2(m,n,i+1);
    }
    return r;
}

int main()
{
    int r;
    r=multSoman1(5,2);
    printf("%d\n",r);
    system("pause");
    return 0;
}
