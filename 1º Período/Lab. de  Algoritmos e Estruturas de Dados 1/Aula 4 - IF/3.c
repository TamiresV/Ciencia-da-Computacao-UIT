#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    char x;
    printf("Entre com um caracter\n");
    scanf(" %c",&x);
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    {
        printf("O caracter %c eh uma vogal\n",x);
    }
    else
    {
        printf("O caracter %c eh um consoante\n",x);
    }
    system("pause");
    return 0;
}
