#include <windows.h>
#include <stdio.h>
#define n 10

int array[]={2,1,4,3,5,7,6,9,8};

void insercaoPorCor(int cor, int h)
{
    int i;
   for (i = (h + cor); i < n; i+=h) {
      int tmp = array[i];
      int j = i - h;
      while ((j >= 0) && (array[j] > tmp)) {
         array[j + h] = array[j];
         j-=h;
      }
      array[j + h] = tmp;
   }
}

// Algoritmo de ordenacao
void shellsort() {
   int h = 1;

   do { h = (h * 3) + 1; } while (h < n);

   do {
      h /= 3;
      int cor;
      for(cor = 0; cor < h; cor++){
         insercaoPorCor(cor, h);
      }
   } while (h != 1);
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
    //TRECHO QUE TERA TEMPO DE EXECUCAO CONTADO
    shellsort();

    tempoEmMilissegundo = GetCounter();
    printf("Tempo = %.7lf milissegundos\n", tempoEmMilissegundo);

    system("pause");
    return 0;
}
