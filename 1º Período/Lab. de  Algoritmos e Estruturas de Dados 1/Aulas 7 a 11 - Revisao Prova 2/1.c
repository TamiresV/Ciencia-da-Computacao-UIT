#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (int argc,char**argv)
{
    char c []={'O','L','A','\0','M','U','U','N','D','O'};
    char x [] = "aeiou";
    int i,j;
    printf("%s",c);
    printf("\n");
    i=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            if(c[i]==x[j]||c[i]=='\0')
            {
                c[i]='*';
            }
        }
        if(i%2==1)
        {
            printf("%s",c);
        }
    }
    system("pause");
    return 0;
}
