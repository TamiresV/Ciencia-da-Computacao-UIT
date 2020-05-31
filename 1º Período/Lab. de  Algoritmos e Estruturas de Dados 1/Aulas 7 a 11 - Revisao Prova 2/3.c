#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char a[101],b[101],c[101];
    int i,j=0;
    printf("Entre com uma string\n");
    scanf(" %s",a);
    printf("Entre com a segunda string\n");
    scanf(" %s",b);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            c[j]=a[i];
            j++;
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            c[j]=b[i];
            j++;
        }
    }
    c[j]='\0';
    printf("Resultado:%s\n",c);
    system("pause");
    return 0;
}
