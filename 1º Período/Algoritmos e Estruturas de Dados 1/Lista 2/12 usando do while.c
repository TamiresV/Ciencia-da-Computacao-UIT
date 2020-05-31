#include<stdio.h>
#include<stdlib.h>
int main (int argc, char** argv)
{
    int x;
    x=2;
    do
    {
        printf("%d\n",x);
        x=x+2;
    }
    while(x<=1000);
    system("pause");
    return 0;
}
