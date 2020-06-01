#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nome [31];
    char autor [31];
    int edicao;
    int ano_lancamento;
}Livro;

Livro v_livro[50];
int cont=0;
int ordenado=0;

int encontrarId(int id);
void menu();
Livro inserir_livro();
void mostrar_livro(Livro x);
int remover_livro();
void salva_arquivo();
void ordernar();

void menu()
{
    printf("1)Inserir Produto:\n");
    printf("2)Remover Produto:\n");
    printf("3)Listar todos produtos cadastrados:\n");
    printf("4)Ordenar:\n");
    printf("5)Salvar em arquivo:\n");
    printf("6)Sair:\n");
}

Livro inserir_livro()
{
    Livro x;
    printf("Id do Livro:\n");
    scanf(" %d",&x.id);
    while(encontrarId(x.id)!=-1)
    {
        printf("Ja existe um livro com esse id\n");
        printf("Id do Livro:\n");
        scanf(" %d",&x.id);
    }
    printf("Nome do livro:\n");
    scanf(" %[^\n]",x.nome);
    printf("Nome do Autor:\n");
    scanf(" %[^\n]",x.autor);
    printf("Numero da Edicao:\n");
    scanf(" %d",&x.edicao);
    printf("Ano de Lancamento:\n");
    scanf(" %d",&x.ano_lancamento);
    cont++;
    return x;
}

void mostrar_livro(Livro x)
{
    printf("Id:%d\n",x.id);
    printf("Nome do livro:%s\n",x.nome);
    printf("Nome do Autor:%s\n",x.autor);
    printf("Numero da Edicao:%d\n",x.edicao);
    printf("Ano de Lancamento:%d\n",x.ano_lancamento);
}

int remover_livro()
{
    int id;
    int id_rem,rem=0,i;
    printf("Qual o id do livro que sera removido:\n");
    scanf(" %d",&id);
    for(i=0;i<cont;i++)
    {
        if(id==v_livro[i].id)
        {
            id_rem=i;
            rem=1;
        }
    }
    if(rem==1)
    {
        for(i=id_rem+1;i<cont;i++)
        {
            v_livro[i-1]=v_livro[i];
        }
        cont--;
    }
    return rem;
}

void salva_arquivo()
{
    int i;
    FILE*f=fopen("registro.txt","w+");
    for(i=0;i<cont;i++)
    {
        fprintf(f,"ID:%d\n",v_livro[i].id);
        fprintf(f,"Nome:%s\n",v_livro[i].nome);
        fprintf(f,"Autor:%s\n",v_livro[i].autor);
        fprintf(f,"Edicao:%d\n",v_livro[i].edicao);
        fprintf(f,"Ano de Lancamento:%d\n",v_livro[i].ano_lancamento);
    }
    fprintf(f,"\n");
    fclose(f);
}

void ordernar()
{
    int i,j;
    Livro p;
    for (i=0;i<cont-1;i++)
    {
        if(v_livro[i].id>v_livro[i+1].id)
        {
            p = v_livro[i];
            v_livro[i] = v_livro[i+1];
            v_livro[i+1]=p;
        }

        for (j = i; j >= 1; j--)
        {
            if (v_livro[j].id <= v_livro[j-1].id)
            {
                p = v_livro[j];
                v_livro[j] = v_livro[j-1];
                v_livro[j-1] = p;
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
        dir = cont;

        while(esq <= dir)
        {
            meio = (esq + dir) / 2;
            if (v_livro[meio].id == id)
            {
                encont = meio;
                esq = cont;
            }
            else if (id > v_livro[meio].id)
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
        for (i = 0; i < cont; i++)
        {
            if (id == v_livro[i].id)
            {
                encont = i;
                i = cont;
            }
        }
    }
    return encont;
}

int main(int argc,char**argv)
{
    int n,i;
    while(1)
    {
        menu();
        scanf(" %d",&n);
        if(n==1)
        {
            v_livro[cont]=inserir_livro();
        }
        else if(n==2)
        {
            int i;
            i=remover_livro();
            if(i==1)
            {
                printf("Livro Removido com Sucesso\n");
            }
            else
            {
                printf("Produto nao encontrado\n");
            }
        }
        else if(n==3)
        {
            for(i=0;i<cont;i++)
            {
                printf("\n");
                mostrar_livro(v_livro[i]);
                printf("\n");
            }
        }
        else if(n==4)
        {
            ordernar();
            printf("Ordenado com sucesso\n");
        }
        else if(n==5)
        {
            salva_arquivo();
            printf("Salvo com sucesso\n");
        }
        else if(n==6)
        {
            break;
        }
        else
        {
            printf("Opção invalida\n");
        }
    }
    system("pause");
    return 0;
}
