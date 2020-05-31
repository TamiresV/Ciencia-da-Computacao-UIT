#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char a[100];
    int i;
    printf("Palavra:\n");
    scanf(" %s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A'||a[i]=='B'||a[i]=='C')
        {
            a[i]='2';
        }
        else if(a[i]=='D'||a[i]=='E'||a[i]=='F')
        {
            a[i]='3';
        }
        else if(a[i]=='G'||a[i]=='H'||a[i]=='I')
        {
            a[i]='4';
        }
        else if(a[i]=='J'||a[i]=='K'||a[i]=='L')
        {
            a[i]='5';
        }
        else if(a[i]=='M'||a[i]=='N'||a[i]=='O')
        {
            a[i]='6';
        }
        else if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
        {
            a[i]='7';
        }
        else if(a[i]=='T'||a[i]=='U'||a[i]=='V')
        {
            a[i]='8';
        }
        else if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
        {
            a[i]='9';
        }
    }

    printf("Telefone correspondente\n");
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
