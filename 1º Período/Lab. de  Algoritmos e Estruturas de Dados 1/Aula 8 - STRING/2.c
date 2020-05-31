#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char v[51],nova[51];
    int i,j;

    printf("String:\n");
    scanf("%s",v);

    j=0;
    for(i=0;v[i]!='\0';i++)
    {
        if(v[i]!='a'&&v[i]!='e'&&v[i]!='i'&&v[i]!='o'&&v[i]!='u')
        {
            nova[j]=v[i];
            j++;
        }
    }
    nova[j]='\0';
    printf("String sem vogais %s\n",nova);
    system("pause");
    return 0;
}
