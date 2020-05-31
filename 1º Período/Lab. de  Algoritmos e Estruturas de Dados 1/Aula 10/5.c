#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char s[101];
    int i,j;
    printf("Forneca uma string com espacos em branco:\n");
    gets(s);
    i=0;
    j=0;
    while(s[i]!='\0')
    {
        if(s[i]!=32)
        {
            s[j]=s[i];
            j++;
        }
        i++;
    }
    s[j]='\0';

    j=0;
    while(s[j]!='\0')
    {
        if(s[j]>64&&s[j]<91)
        {
            s[j]+=32;
        }
        j++;
    }
    puts(s);
    system("pause");
    return 0;
}
