#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int marinheiros,ncocos,ncocosnovo,a;
    ncocos=0;
    ncocosnovo=0;
    printf("Numero de marinheiros\n");
    scanf(" %d",&marinheiros);
    while(1)
    {
        ncocosnovo++;
        ncocos=ncocosnovo;
        for(a=0;a<marinheiros;a++)
        {
            ncocos--;
            if(ncocos%marinheiros==0)
            {
                ncocos=ncocos-(ncocos/marinheiros);
            }
            else
            {
                break;
            }
        }
        if(ncocos%marinheiros==0)
        {
            printf("%d\n",ncocosnovo);
            break;
        }
    }

    system("pause");
    return 0;
}
