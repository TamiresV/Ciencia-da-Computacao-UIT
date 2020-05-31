#include <stdio.h>
#include <stdlib.h>
int main( int argc, char ** argv )
{
    int A[100][100], B[100][100],C[100][100];
    int i, j, k;
    int num_linhas_A, num_colunas_A;
    int num_linhas_B, num_colunas_B;

    printf( "Digite o numero de linhas e colunas da matriz A: " );
    scanf( " %d %d", &num_linhas_A, &num_colunas_A );

    printf( "Digite os elementos da matriz A:\n" );
    for ( i = 0; i < num_linhas_A; i++ )
    {
        for ( j = 0; j < num_colunas_A; j++ )
        {
            scanf( " %d", &A[i][j] );
        }
    }

    printf( "Digite o numero de linhas e colunas da matriz B: " );
    scanf( " %d %d", &num_linhas_B, &num_colunas_B );

    printf( "Digite os elementos da matriz B:\n" );
    for ( i = 0; i < num_linhas_B; i++ )
    {
        for ( j = 0; j < num_colunas_B; j++ )
        {
            scanf( " %d", &B[i][j] );
        }
    }

    if ( num_colunas_A != num_linhas_B )
    {
        printf( "Impossivel multiplicar essas matrizes.\n" );
        printf( "Encerrando programa!\n" );
        //system( "pause" );
        return 0;
    }

    printf( "\n\n\n\n" );

    printf( "Matriz A:\n" );
    for ( i = 0; i < num_linhas_A; i++ )
    {
        for ( j = 0; j < num_colunas_A; j++ )
        {
            printf( "%.2d ", A[i][j] );
        }
        printf( "\n" );
    }

    printf( "Matriz B:\n" );
    for ( i = 0; i < num_linhas_B; i++ )
    {
        for ( j = 0; j < num_colunas_B; j++ )
        {
            printf( "%.2d ", B[i][j] );
        }
        printf( "\n" );
    }

    printf( "\n\n\n\n" );

    printf( "MULTIPLICACAO:\n" );
    for ( i = 0; i < num_linhas_A; i++ )
    {
        for ( j = 0; j < num_colunas_B; j++ )
        {
            C[i][j] = 0;

            for ( k = 0; k < num_linhas_B; k++ )
            {
                C[i][j] += A[i][k] * B[k][j];
            }

            printf( "%.2d ", C[i][j] );
        }
        printf( "\n" );
    }
    system("pause");
    return 0;
}
