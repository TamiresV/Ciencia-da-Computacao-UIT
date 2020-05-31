#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Digite a altura: \n");
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0||i==n-1||i==j)
            {
                printf("o ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
