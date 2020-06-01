#include <stdio.h>
#include <stdlib.h>

char codifica(a);
char decodificar(a);

int main(int argc,char**argv)
{
    char a[100],nova[100];
    int n,i=0;
    while(1)
    {
        printf("Digite 1 pra codificar, 2 pra decodificar e 0 para sair:\n");
        scanf(" %d",&n);
        if(n==1)
        {
            char nome1[20],nome2[20];

            printf("Digite o nome do arquivo que sera codificado:\n");
            scanf(" %[^\n]",nome1);
            FILE*f=fopen(nome1,"r");
            if(f==NULL)
            {
                printf("Arquivo inexistente\n");
                continue;
            }
            printf("Digite o nome do novo arquivo que sera criado:\n");
            scanf(" %[^\n]",nome2);
            FILE*g=fopen(nome2,"w");

            while((a[i]=fgetc(f))!=EOF)
            {
                nova[i]=codifica(a[i]);
                i++;
            }
            nova[i]='\0';
            fprintf(g,"%s\n",nova);
            printf("Codificado\n");
        }
        if(n==2)
        {
            char nome_1[20],nome_2[20];

            printf("Digite o nome do arquivo que sera decodificado:\n");
            scanf(" %[^\n]",nome_1);
            FILE*t=fopen(nome_1,"r");
            if(t==NULL)
            {
                printf("Arquivo inexistente\n");
                system("pause");
                return 0;
            }
            printf("Digite o nome do novo arquivo que sera criado:\n");
            scanf(" %[^\n]",nome_2);
            FILE*v=fopen(nome_2,"w");

            while((a[i]=fgetc(t))!=EOF)
            {
                nova[i]=decodificar(a[i]);
                i++;
            }
            nova[i]='\0';
            fprintf(v,"%s\n",nova);
            printf("Decodificado\n");
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            continue;
        }

    }
    system("pause");
    return 0;
}

char codifica(a)
{
    char p;
    if(a=='a')
    {
        p='v';
    }
    else if(a=='b')
    {
        p='t';
    }
    else if(a=='c')
    {
        p='g';
    }
    else if(a=='D')
    {
        p='M';
    }
    else if(a=='e')
    {
        p='b';
    }
    else if(a=='F')
    {
        p='Z';
    }
    else if(a=='g')
    {
        p='a';
    }
    else if(a=='h')
    {
        p='i';
    }
    else if(a=='i')
    {
        p='w';
    }
    else if(a=='j')
    {
        p='s';
    }
    else if(a=='k')
    {
        p='p';
    }
    else if(a=='l')
    {
        p='f';
    }
    else if(a=='m')
    {
        p='r';
    }
    else if(a=='n')
    {
        p= 'q';
    }
    else if(a=='o')
    {
        p='e';
    }
    else if(a=='p')
    {
        p='c';
    }
    else if(a=='Q')
    {
        p='X';
    }
    else if(a=='r')
    {
        p='u';
    }
    else if(a=='s')
    {
        p='k';
    }
    else if(a=='t')
    {
        p='n';
    }
    else if(a=='u')
    {
        p='o';
    }
    else if(a=='v')
    {
        p='l';
    }
    else if(a=='w')
    {
        p='y';
    }
    else if(a=='x')
    {
        p='h';
    }
    else if(a=='y')
    {
        p='j';
    }
    else if(a=='z')
    {
        p='d';
    }
    else if(a==' ')
    {
        p='.';
    }
    else if(a=='.')
    {
        p='!';
    }
    else if(a==',')
    {
        p='?';
    }
    else if(a=='!')
    {
        p=':';
    }
    else if(a=='?')
    {
        p=' ';
    }
    else if(a==':')
    {
        p=',';
    }
    else if(a=='1')
    {
        p='7';
    }
    else if(a=='2')
    {
        p='4';
    }
    else if(a=='3')
    {
        p='6';
    }
    else if(a=='4')
    {
        p='1';
    }
    else if(a=='5')
    {
        p='3';
    }
    else if(a=='6')
    {
        p='9';
    }
    else if(a=='7')
    {
        p='5';
    }
    else if(a=='8')
    {
        p='0';
    }
    else if(a=='9')
    {
        p='2';
    }
    else if(a=='0')
    {
        p='8';
    }
    else
    {
        p=a;
    }
    return p;
}

char decodificar(a)
{
    char p;
    if(a=='v')
    {
        p='a';
    }
    else if(a=='t')
    {
        p='b';
    }
    else if(a=='g')
    {
        p='c';
    }
    else if(a=='M')
    {
        p='D';
    }
    else if(a=='b')
    {
        p='e';
    }
    else if(a=='Z')
    {
        p='F';
    }
    else if(a=='a')
    {
        p='g';
    }
    else if(a=='i')
    {
        p='h';
    }
    else if(a=='w')
    {
        p='i';
    }
    else if(a=='s')
    {
        p='j';
    }
    else if(a=='p')
    {
        p='k';
    }
    else if(a=='f')
    {
        p='l';
    }
    else if(a=='r')
    {
        p='m';
    }
    else if(a=='q')
    {
        p= 'n';
    }
    else if(a=='e')
    {
        p='o';
    }
    else if(a=='c')
    {
        p='p';
    }
    else if(a=='X')
    {
        p='Q';
    }
    else if(a=='u')
    {
        p='r';
    }
    else if(a=='k')
    {
        p='s';
    }
    else if(a=='n')
    {
        p='t';
    }
    else if(a=='o')
    {
        p='u';
    }
    else if(a=='l')
    {
        p='v';
    }
    else if(a=='y')
    {
        p='w';
    }
    else if(a=='h')
    {
        p='x';
    }
    else if(a=='j')
    {
        p='y';
    }
    else if(a=='d')
    {
        p='z';
    }
    else if(a=='.')
    {
        p=' ';
    }
    else if(a=='!')
    {
        p='.';
    }
    else if(a=='?')
    {
        p=',';
    }
    else if(a==':')
    {
        p='!';
    }
    else if(a==' ')
    {
        p='?';
    }
    else if(a==',')
    {
        p=':';
    }
    else if(a=='7')
    {
        p='1';
    }
    else if(a=='4')
    {
        p='2';
    }
    else if(a=='6')
    {
        p='3';
    }
    else if(a=='1')
    {
        p='4';
    }
    else if(a=='3')
    {
        p='5';
    }
    else if(a=='9')
    {
        p='6';
    }
    else if(a=='5')
    {
        p='7';
    }
    else if(a=='0')
    {
        p='8';
    }
    else if(a=='2')
    {
        p='9';
    }
    else if(a=='8')
    {
        p='0';
    }
    else
    {
        p=a;
    }
    return p;
}
