#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
    char v[101];
    int i,sa=0,se=0,si=0,so=0,su=0;
    printf("String de entrada:\n");
    scanf("%s",v);
    for(i=0;v[i]!='\0';i++)
    {
        if(v[i]=='a')
        {
            sa++;
        }
        else if(v[i]=='e')
        {
            se++;
        }
        else if(v[i]=='i')
        {
            si++;
        }
        else if(v[i]=='o')
        {
            so++;
        }
        else if(v[i]=='u')
        {
            su++;
        }
    }
    printf("A:%d\nE:%d\nI:%d\nO:%d\nU:%d\n",sa,se,si,so,su);
    printf("\n");
    system("pause");
    return 0;
}
