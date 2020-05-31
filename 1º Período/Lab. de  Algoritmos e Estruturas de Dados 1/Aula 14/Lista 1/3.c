#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
}PONTO;

typedef struct
{
    PONTO sup_esq;
    PONTO inf_dir;
}RETANGULO;

double distancia (PONTO a,PONTO b)
{
    double resultado,sub1,sub2;
    sub1=a.x-b.x;
    sub2=a.y-b.y;
    sub1=pow(sub1,2);
    sub2=pow(sub2,2);
    resultado=sub1+sub2;
    resultado=sqrt(resultado);
    return resultado;
}

PONTO maisProximoOrigem (PONTO a,PONTO b)
{
    PONTO origem;
    origem.x=0;
    origem.y=0;
    double dist_a,dist_b;
    dist_a=distancia(a,origem);
    dist_b=distancia(b,origem);
    if(dist_a>dist_b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int estaContido(PONTO a,RETANGULO x)
{
    int i,j;
    for(i=x.sup_esq.x;i<=x.inf_dir.x;i++)
    {
        for(j=x.inf_dir.y;i<=x.sup_esq.y;i++)
        {
            if(a.x==i&&a.y==j)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main(int argc,char**argv)
{
    PONTO A,B;
    PONTO maisperto;
    RETANGULO ret;
    double dist;

    printf("Entre com as coordenadas x e y do primeiro ponto:\n");
    scanf(" %lf %lf",&A.x,&A.y);
    printf("Entre com as coordenadas x e y do segundo ponto:\n");
    scanf(" %lf %lf",&B.x,&B.y);

    printf("Entre com as coordenadas x e y do ponto da superior esquerda do retangulo:\n");
    scanf(" %lf %lf",&ret.sup_esq.x,&ret.sup_esq.y);
    printf("Entre com as coordenadas x e y do ponto da inferior direita do retangulo:\n");
    scanf(" %lf %lf",&ret.inf_dir.x,&ret.inf_dir.y);

    dist=distancia(A,B);
    printf("Distancia entre os pontos:%lf\n",dist);

    maisperto=maisProximoOrigem(A,B);
    printf("Ponto mais proximo da origem:(%lf,%lf)\n",maisperto.x,maisperto.y);

    if(estaContido(A,ret)==1)
    {
        printf("(%lf %lf)esta contido no retangulo\n",A.x,A.y);
    }
    else
    {
        printf("(%lf %lf)nao esta contido no retangulo\n",A.x,A.y);
    }
    if(estaContido(B,ret)==1)
    {
        printf("(%lf %lf)esta contido no retangulo\n",B.x,B.y);
    }
    else
    {
        printf("(%lf %lf)nao esta contido no retangulo\n",B.x,B.y);
    }
    system("pause");
    return 0;
}
