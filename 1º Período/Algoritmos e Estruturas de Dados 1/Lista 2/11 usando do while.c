#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int x;
    x=1;
    do
    {
        printf("%d\n",x);
        x++;
    }
    while (x<=1000);
    system("pause");
    return 0;
}
