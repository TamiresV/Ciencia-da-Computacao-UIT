#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int x;
    for(x=2;x<=1000;x=x+2)
    {
        printf("%d\n",x);
    }
    system ("pause");
    return 0;
}
