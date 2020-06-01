#include <stdio.h>
#include <stdlib.h>



int fibonacci(int x)
{
    int r=0;
    if(x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else
    {
        r=fibonacci(x-1)+fibonacci(x-2);
    }
    return r;
}

int main()
{
    int r;
    r=fibonacci(8);
    printf("%d\n",r);
    system("pause");
    return 0;
}
