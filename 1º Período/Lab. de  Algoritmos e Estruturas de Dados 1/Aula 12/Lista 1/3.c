#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main(int argc,char**argv)
{
    int i,num[7]={0,0,0,0,0,0,0};
    int r;
    srand(time(NULL));
    for(i=0;i<1000000;i++)
    {
        r=dado();
        num[r]+=1;
    }
    for(i=1;i<7;i++)
    {
        printf("%d: %d vezes\n",i,num[i]);
    }
    system("pause");
    return 0;
}

int dado()
{
    int r;
    r=rand()%6+1;
    return r;
}
