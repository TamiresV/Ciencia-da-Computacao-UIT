#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    int x;
    printf("Entre com um caracter\n");
    scanf(" %c",&x);
    switch(x)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("O caracter %c eh um vogal\n",x);
        break;
   // default:
     //   printf("O caracter %c eh uma consoante\n",x);
    }
    system("pause");
    return 0;
}
