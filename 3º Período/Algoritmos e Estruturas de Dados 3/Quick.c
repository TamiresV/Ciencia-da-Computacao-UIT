#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quick(int *array,int esq,int dir)
{
    int i=esq,j=dir,pivo=array[(dir+esq)/2];
    int tmp;
    while(i<=j){
        while(array[i]<pivo){
            i++;
        }
        while(array[j]>pivo){
            j--;
        }
        if(i<=j){
            tmp=array[i];
            array[i]=array[j];
            array[j]=tmp;
            i++;
            j--;
        }
    }
    if(esq<j){
        quick(array,esq,j);
    }
    if(i<dir){
        quick(array,i,dir);
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
	quick(vet,0,n-1);
	clock_t t2 = clock();

	double tempo_usado_cpu;
	tempo_usado_cpu = ((double)(t2-t1)) / CLOCKS_PER_SEC;
	printf("\nO tempo q gastou foi: %lf\n",tempo_usado_cpu);

	system ("pause");
	return 0;
}
