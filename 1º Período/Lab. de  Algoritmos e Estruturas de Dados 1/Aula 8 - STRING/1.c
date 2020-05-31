#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char v[101];
    int i;
    printf("String:\n");
    scanf("%s",v);
    for(i=0;v[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            printf("%c",v[i]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
