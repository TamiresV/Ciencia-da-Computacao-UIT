#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int a,b,x,div;
    printf("Entre com um numero\n");
    scanf(" %d",&x);
    for(a=0;a<=x;a++)
    {
           div=0;
        for(b=1;b<=a;b++)
        {
            if(a%b==0)
            {
                div++;
            }
        }
        if (div==2)
        {
            printf("%d\n",a);
        }
    }
    system("pause");
    return 0;
}
