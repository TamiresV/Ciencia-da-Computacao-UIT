#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int lin,col;
    for(lin=1;lin<=10;lin++)
    {
        for(col=1;col<=10;col++)
        {
            if (lin+col<=11)
            {
                if(col%2==0)
                {
                    printf("_");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
