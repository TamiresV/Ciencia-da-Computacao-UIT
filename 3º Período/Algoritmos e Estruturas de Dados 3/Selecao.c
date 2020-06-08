#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100000

void ordena(int array[],int n)
{
    int i,j,menor,tmp;
	for(i=0;i<(n-1);i++)
	 {
	 	menor=i;
	 	for(j=(i+1);j<n;j++)
	 	{
	 		if(array[menor]>array[j])
	 		{
	 			menor=j;
	 		}
	 	}
	 	tmp=array[menor];
	 	array[menor]=array[i];
	 	array[i]=tmp;
	 }
}

int main(int argc,char**argv)
{
	int *array = malloc(1000000*sizeof(int));
	FILE* arq=fopen("E_1000000.txt","r");
	int n,i;

	fscanf(arq," %d", &n);
	while(!feof(arq))///ler aquivo enquanto ainda tiver algum dado
	{
	    for(i=0;i<n;i++){
            fscanf(arq," %d", &array[i]);
	    }
	}
	fclose(arq);
    int indice;

    clock_t t1 = clock();
	ordena(array,n);
	clock_t t2 = clock();
	//for(indice=0;indice<TAM;indice++)
	//{
	//	printf("%d ",array[indice]);
	//}
	double tempo_usado_cpu;
	tempo_usado_cpu = ((double)(t2-t1)) / CLOCKS_PER_SEC;
	printf("\nO tempo q gastou foi: %lf\n",tempo_usado_cpu);
	system ("pause");
	return 0;
}
