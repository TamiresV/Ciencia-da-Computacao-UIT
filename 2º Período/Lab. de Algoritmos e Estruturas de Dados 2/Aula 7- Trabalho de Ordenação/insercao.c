#include <windows.h>
#include <stdio.h>
#define n 10

int array[]={2,1,4,3,5,7,6,9,8};

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
    int i,j,tmp;
    StartCounter();
    //TRECHO QUE TERA TEMPO DE EXECUCAO CONTADO
    for(i=1;i<n;i++)
    {
        tmp=array[i];
        for(j=i-1;j>=0&&array[j]>tmp;j--)
        {
            array[j+1]=array[j];
        }
        array[j+1]=tmp;
    }

    tempoEmMilissegundo = GetCounter();
    printf("Tempo = %.7lf milissegundos\n", tempoEmMilissegundo);

    system("pause");
    return 0;
}
