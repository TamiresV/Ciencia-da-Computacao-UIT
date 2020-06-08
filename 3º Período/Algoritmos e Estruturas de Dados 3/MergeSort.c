#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int A[], int size);
void mergeSort(int vet[], int esq, int dir);
void merge(int vet[], int esq, int meio, int dir);

int main(int argc,char**argv)
{
    int *vet=malloc(1000000*sizeof(int));
	FILE* arq=fopen("E_1000000.txt","r");
	if(arq==NULL){
        printf("NAO ENCONTRADO\n");
	}
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
	mergeSort(vet,0,n-1);
	clock_t t2 = clock();

	double tempo_usado_cpu;
	tempo_usado_cpu = ((double)(t2-t1)) / CLOCKS_PER_SEC;

	///printArray(vet,n);

	printf("\nO tempo q gastou foi: %lf\n",tempo_usado_cpu);

	system ("pause");
	return 0;
}

void mergeSort(int vet[], int esq, int dir)
{
    if (esq < dir)
    {
        // Decide o meio
		int meio = esq+(dir-esq)/2;

        // Separa a primeira e a segunda metade
        mergeSort(vet, esq, meio);
        mergeSort(vet, meio+1, dir);

        merge(vet, esq, meio, dir);
    }
}
// Junta dois subvetores de vet[].
// Primeiro subvetor de vet[esq..meio]
// Segundo subetor de vet[meio+1..dir]
void merge(int vet[], int esq, int meio, int dir)
{
    int i, j, k;
    int n1 = meio - esq + 1;
    int n2 =  dir - meio;

    /* cria vetores temporarios*/
    int temp1[n1],temp2[n2];

    /* Copia informação para os vetores temp1[] e temp2[] */
    for (i = 0; i < n1; i++)
        temp1[i] = vet[esq + i];
    for (j = 0; j < n2; j++)
        temp2[j] = vet[meio + 1+ j];

    /* Junta os vetores temporarios de volta para o vetor original*/
    i = 0; // Indice inicial do primeiro subvetor
    j = 0; // Indice inicial do segundo subvetor
    k = esq; // Indice inicial dos vetores juntos
    while (i < n1 && j < n2)
    {
        if (temp1[i] <= temp2[j])
        {
            vet[k] = temp1[i];
            i++;
        }
        else
        {
            vet[k] = temp2[j];
            j++;
        }
        k++;
    }

    /* Copia os elementos que sobraram do vetor temporario 1, se tiver algum */
    while (i < n1)
    {
        vet[k] = temp1[i];
        i++;
        k++;
    }

    /* Copia os elementos que sobraram do vetor temporario 2, se tiver algum */
    while (j < n2)
    {
        vet[k] = temp2[j];
        j++;
        k++;
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

