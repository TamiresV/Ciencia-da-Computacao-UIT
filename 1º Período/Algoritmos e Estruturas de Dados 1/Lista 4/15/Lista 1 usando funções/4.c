#include<stdio.h>
#include<stdlib.h>

int aniversario(int dian,int mesn,int anon,int dia, int mes, int ano);

int main (int argc,char**argv)
{
    int idade;
    int dia,mes,ano;
    int dian,mesn,anon;
    printf("Entre com o dia, mes e ano de seu nascimento (dd mm aaaa)\n");
    scanf(" %d %d %d",&dian,&mesn,&anon);
    printf("Entre com o dia, mes e ano atuais\n");
    scanf(" %d %d %d",&dia,&mes,&ano);
    idade=aniversario(dian,mesn,anon,dia,mes,ano);
    printf("Sua idade eh: %d\n",idade);
    system("pause");
    return 0;
}

int aniversario(int dian,int mesn,int anon,int dia, int mes, int ano)
{
    int idade;
    if((dia>=dian && mes==mesn)||(mes>mesn))
    {
        idade=ano-anon;
    }
    else
    {
        idade=(ano-anon)-1;
    }
    return idade;
}
