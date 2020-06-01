#include <windows.h>
#include <stdio.h>
#define n 10

int array[]={2,1,4,3,5,7,6,9,8};

// Algoritmo de ordenacao
void quicksort()
{
    quicksortRec(0, n-1);
}

void quicksortRec (int esq, int dir)
{
    int auxiliar;
    int i = esq, j = dir;
    int pivo = array[(dir+esq)/2];
    while (i <= j)
    {
        while (array[i] < pivo)
        {
            i++;
        }
        while (array[j] > pivo)
        {
            j--;
        }
        if (i <= j)
        {
            auxiliar = array[i];
            array[i] = array[j];
            array[j] = auxiliar;
            i++;
            j--;
        }
   }
   if (esq < j)
   {
       quicksortRec(esq, j);
   }
   if (i < dir)
   {
       quicksortRec(i, dir);
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

    quicksort();

    tempoEmMilissegundo = GetCounter();
    printf("Tempo = %.7lf milissegundos\n", tempoEmMilissegundo);

    system("pause");
    return 0;
}
