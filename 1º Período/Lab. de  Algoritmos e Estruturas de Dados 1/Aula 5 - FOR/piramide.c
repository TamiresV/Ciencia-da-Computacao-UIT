#include <stdio.h>
#include <stdlib.h>
int main( int argc , char**argv)
{
    int linhas;
    printf ("Altura da piramide: ") ;
    scanf ("%d" , &linhas ) ;
    int i , j , numestrelas = 1;
    for ( i = 1; i <= linhas ; i++)
    {
        for(j=0;j<linhas-i;j++)
        {
            printf(" ");
        }
        for ( j = 0; j < numestrelas ; j++ )
        {
            printf ("*");
        }
        printf ("\n");
        numestrelas += 2;
    }
    system("pause");
    return 0;
}
