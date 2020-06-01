#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
	int x=10;
	int *p;
	p=&x;
	printf("%d\n", *p);
	system("pause");
	return 0;
}
