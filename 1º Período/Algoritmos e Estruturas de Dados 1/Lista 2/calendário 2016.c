#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
    int dia,mes;
    for(mes=1;mes<=12;mes++)
    {
        for(dia=1;dia<=31;dia++)
        {
            if((mes==2&&dia>29)||(mes==4&&dia==31)||(mes==6&&dia==31)||(mes==9&&dia==31)||(mes==11&&dia==31))
            {
            }
            else
            {
                printf("%.2d/%.2d/2016\n",dia,mes);
            }
        }
    }
    system("pause");
    return 0;
}
