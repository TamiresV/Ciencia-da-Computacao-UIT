#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int h,m,s;
    for(h=0;h<24;h++)
    {
        for(m=0;m<60;m++)
        {
            for(s=0;s<60;s++)
            {
                printf("%.2d:%.2d:%.2d\n",h,m,s);
            }
        }
    }
    system("pause");
    return 0;
}
