#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void heap(int array[],int n);
void criaHeap(int array[],int i,int f);

void heap(int array[],int n)
{
    int i, tmp;
    for(i=(n-1)/2;i>=0;i--){
        criaHeap(array,i,n-1);
    }
    for(i=n-1;i>=1;i--){
        tmp=array[0];
        array[0]=array[i];
        array[i]=tmp;
        criaHeap(array,0,i-1);
    }
}

void criaHeap(int array[],int i,int f)
{
    int tmp=array[i];
    int j=i*2+1;
    while(j<=f){
        if(j<f){
            if(array[j]<array[j+1]){
                j=j+1;
            }
        }
        if(tmp<array[j]){
            array[i]=array[j];
            i=j;
            j=2*i+1;
        }
        else{
            j=f+1;
        }
    }
    array[i]=tmp;
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
	heap(vet,n);
	clock_t t2 = clock();

	double tempo_usado_cpu;
	tempo_usado_cpu = ((double)(t2-t1)) / CLOCKS_PER_SEC;
	printf("\nO tempo q gastou foi: %lf\n",tempo_usado_cpu);

	system ("pause");
	return 0;
}
