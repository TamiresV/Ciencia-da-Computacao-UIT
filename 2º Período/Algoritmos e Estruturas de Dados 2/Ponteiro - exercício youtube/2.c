#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int hora;
	int minuto;
	int segundo;
}horario;

int main (int argc,char**argv)
{
	horario agora,*depois;
	depois=&agora;
	depois->hora=20;
	depois->minuto=20;
	depois->segundo=20;
	printf("%d:%d:%d\n", agora.hora,agora.minuto,agora.segundo);
}
