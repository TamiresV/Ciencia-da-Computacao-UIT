#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char ** argv)
{
    srand(time(NULL));
    int a = rand()%60+1;
    int b = rand()%60+1;
    int c = rand()%60+1;
    int d = rand()%60+1;
    int e = rand()%60+1;
    int f = rand()%60+1;
    printf("Numeros sorteados: %d %d %d %d %d %d\n",a,b,c,d,e,f);
    system ("pause");
    return 0;
}
