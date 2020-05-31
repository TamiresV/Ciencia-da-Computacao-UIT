#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    srand (5);
    int x = rand ();
    int y = rand ();
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    system("pause");
    return 0;
}
