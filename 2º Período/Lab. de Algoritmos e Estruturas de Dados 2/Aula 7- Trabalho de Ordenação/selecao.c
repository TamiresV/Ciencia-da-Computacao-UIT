#include <windows.h>
#include <stdio.h>
#define n 10

int array[]={5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,5,7,11,23,35,6,2,15,33,1,};

void selectionSort()
{
    int i,j;
    for (i = 0; i < (n - 1); i++)
    {
        int indice = i;
        for (j = (i + 1); j < n; j++){
            if (array[indice] > array[j]){
            indice = j;
         }
      }
      int auxiliar = array[indice];
      array[indice] = array[i];
      array[i] = auxiliar;
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

    selectionSort();

    tempoEmMilissegundo = GetCounter();
    printf("Tempo = %.7lf milissegundos\n", tempoEmMilissegundo);

    system("pause");
    return 0;
}
