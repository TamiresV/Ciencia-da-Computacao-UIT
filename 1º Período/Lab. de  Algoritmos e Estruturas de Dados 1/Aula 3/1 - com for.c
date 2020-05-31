#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(int argc,char**argv)
{
    int x,a;
    srand(time(NULL));
    for(a=1;a<=6;a++)
    {
        x=rand()%60+1;
        printf("%d\n",x);
    }
    system("pause");
    return 0;
}
