#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    float v[10]={5,7,2,8,6,4,4,10,1,2};
    float porcento;
    int i;
    printf("Digite a porcentagem de aumento:\n");
    scanf(" %f",&porcento);
    for(i=0;i<10;i++)
    {
        v[i]*=1+porcento/100;
        if(v[i]>10)
        {
            v[i]=10;
        }
        printf("%.2f\n",v[i]);
    }
    system("pause");
    return 0;
}
