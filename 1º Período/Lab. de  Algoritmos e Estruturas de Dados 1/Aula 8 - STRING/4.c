#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char a[101],b[101];
    int i,j;
    printf("Palavra 1:\n");
    scanf("%s",a);
    printf("Palavra 2:\n");
    scanf("%s",b);
    i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    j=0;
    while(b[j]!='\0')
    {
        a[i]=b[j];
        j++;
        i++;
    }
    a[i]='\0';
    puts(a);
    system("pause");
    return 0;
}
