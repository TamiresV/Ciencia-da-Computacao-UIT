#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    float v[100],x;
    int i,num;
    x=1;
    printf("Digite quantos numeros entre (1 e 100) teram no vetor\n");
    scanf(" %d",&num);
    printf("Digite os %d elementos\n",num);
    for(i=0;i<num;i++)
    {
        scanf(" %f",&v[i]);
    }
    for(i=0;i<num;i++)
    {
        x*=v[i];
    }
    printf("O produto foi igual a: %.2f\n",x);
    system("pause");
    return 0;
}
