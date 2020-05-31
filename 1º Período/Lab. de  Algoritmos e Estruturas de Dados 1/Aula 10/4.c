#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char prim[101],seg[101];
    int i,j,k,l;
    int a=0;
    printf("String 1\n");
    scanf(" %s",prim);
    printf("String 2\n");
    scanf(" %s",seg);
    k=0;
    while(seg[k]!='\0')
    {
        k++;
    }
    i=0;
    while(prim[i]!='\0')
    {
        j=0;
        if(prim[i]==seg[0])
        {l=i;
            while(seg[j]!='\0')
            {

                if(prim[l]==seg[j])
                {
                    l++;
                    j++;
                }
                else
                {
                    break;
                }
            }
            if(j==k)
            {
                printf("A segunda string esta contida na primeira\n");
                a=1;
            }
        }
        i++;
    }

    if(!a)
    {
        printf("A segunda string nao esta contida na primeira\n");
    }
    system("pause");
    return 0;
}
