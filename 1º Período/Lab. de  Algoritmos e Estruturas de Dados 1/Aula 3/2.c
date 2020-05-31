#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    float nota1,nota2,media;
    printf("Forneca as duas notas do aluno\n");
    scanf(" %f %f",&nota1,&nota2);
    media=(nota1 + nota2)/2;
    printf("A media final do aluno foi: %.2f\n",media);
    system("pause");
    return 0;
}
