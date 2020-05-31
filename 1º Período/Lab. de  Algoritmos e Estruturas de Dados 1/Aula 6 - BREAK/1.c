#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
  int numfornecidos,a,num,soma,c;
  float media;
  soma = 0;
  media=0;
  c=0;
  printf("Quantos numeros serao fornecidos?\n");
  scanf(" %d",&numfornecidos);
  for (a=1;a<=numfornecidos;a++)
  {

      printf("Entre com um numero:\n");
      scanf(" %d",&num);
      if(num<0)
      {
          break;
      }
      soma=soma+num;
      c++;
  }
    media=(float)soma/c;
    printf("%f\n",media);
    system("pause");
    return 0;
}
