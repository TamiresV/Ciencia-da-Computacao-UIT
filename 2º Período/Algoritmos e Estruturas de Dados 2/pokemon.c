#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 10

typedef struct
{
    int id;
    int poder;
    char tipo[20];
    char nome [20];
}POKEMON;

void cadastraPokemon();
void salva_arquivo();
void inserirInicio(POKEMON x);
void inserirFim(POKEMON x);
void inserir(POKEMON x,int pos);
POKEMON removerInicio();
POKEMON removerFim();
POKEMON remover(int pos);
void salva_arquivo();
void ler_arquivo();
int pesquisaSequencial();
void mostrar();
void ordernar();
int encontrarId(int id);

POKEMON array[MAXTAM];
int n=0;
int ordenado=0;

void cadastraPokemon()
{
    printf("ID do pokemon:\n");
    scanf(" %d",&array[n].id);
    printf("Digite o poder do pokemon:\n");
    scanf(" %d",&array[n].poder);
    printf("Digite o tipo do pokemon:\n");
    scanf(" %[^\n]",array[n].tipo);
    printf("Digite o nome do pokemon:\n");
    scanf(" %[^\n]",array[n].nome);
}

void salva_arquivo()
{
    int i;
    FILE*f=fopen("pokemon.txt","w");
    for(i=0;i<n;i++)
    {
        fprintf(f,"ID:%d\n",array[i].id);
        fprintf(f,"Poder:%d\n",array[i].poder);
        fprintf(f,"Tipo:%s\n",array[i].tipo);
        fprintf(f,"Nome:%s\n",array[i].nome);
    }
    fprintf(f,"\n");
    fclose(f);
}

void ler_arquivo()
{
    char palavra[100];
    FILE*f=fopen("pokemon.txt","r");
    if(f==NULL)
    {
        printf("Arquivo nao encontrado\n");
        exit(1);
    }
    while(fgets(palavra,100,f)!=NULL)
    {
        printf("%s",palavra);
    }
    fclose(f);
}

void inserirInicio(POKEMON x)
{
    int i;
    if(n>=MAXTAM)
    {
        exit(1);
    }
    for(i=0;i>0;i--)
    {
        array[i]=array[i-1];
    }
    array[0]=x;
    n++;
}

void inserirFim(POKEMON x)
{
    if(n>=MAXTAM)
    {
        exit(1);
    }
    array[n]=x;
    n++;
}

void inserir(POKEMON x,int pos)
{
    int i;
    if(n>=MAXTAM||pos<0||pos>n)
    {
        exit(1);
    }
    for(i=n;i>pos;i--)
    {
        array[i]=array[i-1];
    }
    array[pos]=x;
    n++;
}

POKEMON removerInicio()
{
    int i;
    POKEMON resp;
    if(n==0)
    {
        exit(1);
    }
    resp=array[0];
    n--;
    for(i=0;i<n;i++)
    {
        array[i]=array[i+1];
    }
    return resp;
}

POKEMON removerFim()
{
    if(n==0)
    {
        exit(1);
    }
    return array[--n];
}

POKEMON remover(int pos)
{
    int i;
    POKEMON resp;
    if(n==0||pos<0||pos>=n)
    {
        exit(1);
    }
    resp=array[pos];
    n--;
    for(i=pos;i<n;i++)
    {
        array[i]=array[i+1];
    }
    return resp;
}

int pesquisaSequencial()
{
    int i,num;
    printf("Digite o ID do pokemon que esta procurando:\n");
    scanf(" %d",&num);
    for(i=0;i<n;i++)
    {
        if(num==array[i].id)
        {
            return i;
        }
    }
    return -1;
}

void ordernar()
{
    int i,j;
    POKEMON v;
    for (i=0;i<n-1;i++)
    {
        if(array[i].id>array[i+1].id)
        {
            v = array[i];
            array[i] = array[i+1];
            array[i+1]=v;
        }

        for (j = i; j >= 1; j--)
        {
            if (array[j].id <= array[j-1].id)
            {
                v = array[j];
                array[j] = array[j-1];
                array[j-1] = v;
            }
            else
            {
                j = 0;
            }
        }
    }
    ordenado=1;
}

int encontrarId(int id)
{
    int i;
    int encont = -1;

    if (ordenado==1)
    {
        int esq, dir, meio;
        esq = 0;
        dir = n;

        while(esq <= dir)
        {
            meio = (esq + dir) / 2;
            if (array[meio].id == id)
            {
                encont = meio;
                esq = n;
            }
            else if (id > array[meio].id)
            {
                esq = meio;
            }
            else
            {
                dir = meio;
            }
        }
    }
    else
    {
        for (i = 0; i <n; i++)
        {
            if (id == array[i].id)
            {
                encont = i;
                i = n;
            }
        }
    }
    return encont;
}

void mostrar(int i)
{
    printf("ID:%d\n",array[i].id);
    printf("Poder:%d\n",array[i].poder);
    printf("Tipo:%s\n",array[i].tipo);
    printf("Nome:%s\n",array[i].nome);
    printf("\n");
}

void menu()
{
    printf("1-Inserir Inicio\n");
    printf("2-Inserir Final\n");
    printf("3-Inserir(passa posicao)\n");
    printf("4-Remover Inicio\n");
    printf("5-Remover Final\n");
    printf("6-Remover(passa posicao)\n");
    printf("7-Pesquisa Binaria\n");
    printf("8-Pesquisa Sequencial\n");
    printf("9-Salvar Arquivo\n");
    printf("10-Ler Arquivo\n");
    printf("11-Sair\n");
}

int main(int argc,char**argv)
{
    POKEMON r;
    int num,posicao;
    do
    {
        menu();
        scanf(" %d",&num);
        if(num==1)
        {
            cadastraPokemon();
            inserirInicio(array[n]);
        }
        else if(num==2)
        {
            cadastraPokemon();
            inserirFim(array[n]);
        }
        else if(num==3)
        {
            printf("Posicao inserida:\n");
            scanf(" %d",&posicao);
            cadastraPokemon();
            inserir(array[n],posicao);
        }
        else if(num==4)
        {
            r=removerInicio();
            printf("ID:%d\n",r.id);
            printf("Poder:%d\n",r.poder);
            printf("Tipo:%s\n",r.tipo);
            printf("Nome:%s\n",r.nome);
            printf("REMOVIDO\n");
        }
        else if(num==5)
        {
            r=removerFim();
            printf("ID:%d\n",r.id);
            printf("Poder:%d\n",r.poder);
            printf("Tipo:%s\n",r.tipo);
            printf("Nome:%s\n",r.nome);
            printf("REMOVIDO\n");
        }
        else if(num==6)
        {
            printf("Passe a posicao que sera removida:\n");
            scanf(" %d",&posicao);
            r=remover(posicao);
            printf("ID:%d\n",r.id);
            printf("Poder:%d\n",r.poder);
            printf("Tipo:%s\n",r.tipo);
            printf("Nome:%s\n",r.nome);
            printf("REMOVIDO\n");
        }
        else if(num==7)
        {
            int r;
            r=pesquisaSequencial();
            if(r==-1)
            {
                printf("Pokemon nao encontrado\n");
            }
            else
            {
                mostrar(r);
            }
        }
        else if(num==8)
        {
            int num,r;
            ordernar();
            printf("ID que deseja encontrar:\n");
            scanf(" %d",&num);
            r=encontrarId(num);
            if(r==-1)
            {
                printf("Pokemon nao encontrado\n");
            }
            else
            {
                mostrar(r);
            }
        }
        else if(num==9)
        {
            salva_arquivo();
            printf("Salvo em Arquivo\n");
        }
        else if(num==10)
        {
            ler_arquivo();
        }
    }while(num!=11);
    system("pause");
    return 0;
}
