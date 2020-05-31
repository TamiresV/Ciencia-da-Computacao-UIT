#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int tam,i;
    float v[100];
    printf("Digite quantos numeros entre (1 e 100) teram no vetor\n");
    scanf(" %d",&tam);
    printf("Digite os %d elementos\n",tam);
    for(i=0;i<tam;i++)
    {
        scanf(" %f",&v[i]);
    }
    printf("\n");
    for(i=tam-1;i>=0;i--)
    {
        if(i%2==0)
        {
            printf("%.2f\n",v[i]);
        }
    }
    system("pause");
    return 0;
}
