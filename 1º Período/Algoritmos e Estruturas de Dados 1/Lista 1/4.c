#include<stdio.h>
#include<stdlib.h>
int main (int argc,char**argv)
{
    int idade;
    int dia,mes,ano;
    int dian,mesn,anon;
    printf("Entre com o dia, mes e ano de seu nascimento (dd mm aaaa)\n");
    scanf(" %d %d %d",&dian,&mesn,&anon);
    printf("Entre com o dia, mes e ano atuais\n");
    scanf(" %d %d %d",&dia,&mes,&ano);
    if((dia>=dian && mes==mesn)||(mes>mesn))
    {
        idade=ano-anon;
    }
    else
    {
        idade=(ano-anon)-1;
    }
    printf("Sua idade eh: %d\n",idade);
    system("pause");
    return 0;
}
