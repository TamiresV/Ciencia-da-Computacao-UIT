#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena(int array[],int n)
{
    int i,j,tmp;
	for(i=1;i<n;i++)
	{
        tmp=array[i];
	 	for(j=i-1;j>=0 && array[j]>tmp;j--)
	 	{
	 	    array[j+1]=array[j];
	 	}
	 	array[j+1]=tmp;
	 }
}

int main(int argc,char**argv)
{
    int *vet=malloc(1000000*sizeof(int));
	FILE* arq=fopen("E_1000000.txt","r");
	int n,i;
	fscanf(arq," %d", &n);
	while(!feof(arq))///ler aquivo enquanto ainda tiver algum dado
	{
	    for(i=0;i<n;i++){
            fscanf(arq," %d", &vet[i]);
	    }
	}
	fclose(arq);

	clock_t t1 = clock();
	ordena(vet,n);
	clock_t t2 = clock();

	double tempo_usado_cpu;
	tempo_usado_cpu = ((double)(t2-t1)) / CLOCKS_PER_SEC;
	printf("\nO tempo q gastou foi: %lf\n",tempo_usado_cpu);

	system ("pause");
	return 0;
}
