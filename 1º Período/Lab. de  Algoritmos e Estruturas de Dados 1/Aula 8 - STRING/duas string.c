#include <stdio.h>
#include <stdlib.h>
int main()
{
    char palavra[101],maior[101];
    int i;
    printf("string\n");
    scanf(" %s",palavra);
    for(i=0;palavra[i]!='\0';i++)
    {
        maior[i]=palavra[i];
    }
    maior[i]='\0';
    puts(maior);
    system("pause");
    return 0;
}
