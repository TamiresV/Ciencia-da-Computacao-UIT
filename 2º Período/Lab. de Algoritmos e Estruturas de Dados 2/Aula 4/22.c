#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo1(char s[])
{
    return palindromo2(s,0);
}

void palindromo2(char s[],int i)
{
    if(i!=strlen(s))
    {
        if(i>=strlen(s)/2)
        {
            printf("Palindromo\n");
        }
        else if(s[i]!=s[strlen(s)-1-i])
        {
            printf("Nao eh palindromo\n");
        }
        else
        {
            palindromo2(s,i+1);
        }
    }
}

int main()
{
    palindromo1("ovo");
    system("pause");
    return 0;
}
