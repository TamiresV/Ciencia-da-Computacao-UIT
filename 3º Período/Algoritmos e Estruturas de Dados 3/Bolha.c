#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bolha(int array[],int n)
{
    int i,j,tmp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[j]<array[i]){
                tmp=array[j];
                array[j]=array[i];
                array[i]=tmp;
            }
        }
    }
}

int main(int argc,char**argv)
{
    int *vet=malloc(1000000*sizeof(int));
	FILE* arq=fopen("C_1000000.txt","r");
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
	bolha(vet,n);
	clock_t t2 = clock();

	double tempo_usado_cpu;
	tempo_usado_cpu = ((double)(t2-t1)) / CLOCKS_PER_SEC;
	printf("\nO tempo q gastou foi: %lf\n",tempo_usado_cpu);

	system ("pause");
	return 0;
}
