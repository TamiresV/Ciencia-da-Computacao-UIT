#include <stdio.h>
#include <windows.h>
#define n 10

int array[]={5,7,11,23,35,6,2,15,33,1};

void constroi(int tamHeap)
{
    int i,auxiliar;
    for(i = tamHeap; i > 1 && array[i] > array[i/2]; i /= 2)
    {
        auxiliar=array[i];
        array[i]=array[i/2];
        array[i/2]=auxiliar;
    }
}

void reconstroi(int tamHeap)
{
    int i = 1, filho,auxiliar;
    while(i <= (tamHeap/2))
    {
        if (array[2*i] > array[2*i+1] || 2*i == tamHeap)
        {
            filho = 2*i;
        }
        else
        {
            filho = 2*i + 1;
        }

        if(array[i] < array[filho])
        {
            auxiliar=array[i];
            array[i]=array[filho];
            array[filho]=auxiliar;
            i = filho;
        }
        else
        {
            i = tamHeap;
        }
   }
}

// Algoritmo de ordenacao
void heapsort() {
   //Alterar o vetor ignorando a posicao zero
   int i,auxiliar;
   for(i = n; i > 0; i--){
      array[i] = array[i-1];
   }

   //Contrucao do heap
    int tamHeap;
    for(tamHeap = 1; tamHeap <= n; tamHeap++){
        constroi(tamHeap);
    }

   //Ordenacao propriamente dita
    int tamheap = n;
    while(tamheap > 1)
    {
        tamheap--;
        auxiliar=array[1];
        array[1]=array[tamheap];
        array[tamheap]=auxiliar;
        reconstroi(tamheap);
    }

    //Alterar o vetor para voltar a posicao zero
    for(i = 0; i < n; i++)
    {
        array[i] = array[i+1];
    }
}

double PCFreq = 0.0;
__int64 CounterStart = 0;

void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
        printf("QueryPerformanceFrequency Failed.\n");
    PCFreq = (double)(li.QuadPart) / 1000.0;
    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (double)(li.QuadPart - CounterStart) / PCFreq;
}

int main()
{
    double tempoEmMilissegundo = 0.0000000;
    StartCounter();

    heapsort();

    tempoEmMilissegundo = GetCounter();
    printf("Tempo = %f milissegundos\n", tempoEmMilissegundo);

    system("pause");
    return 0;
}
