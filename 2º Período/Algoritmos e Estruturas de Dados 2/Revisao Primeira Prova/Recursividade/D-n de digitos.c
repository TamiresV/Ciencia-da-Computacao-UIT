#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char v[5]={'a','2','b','%','111'};

int contaDigito1(char v[])
{
    return contaDigito2(v,0);
}
int contaDigito2(char v[],int i)
{
    int quant=0;
    if(i<strlen(v))
    {
        if(v[i]=='0'||v[i]=='1'||v[i]=='2'||v[i]=='3'||v[i]=='4'||v[i]=='5'||v[i]=='6'||v[i]=='7'||v[i]=='8'||v[i]=='9')
        {
            quant++;
        }
        quant+=contaDigito2(v,i+1);
    }
    return quant;
}

int main(int argc,char**argv)
{
    int r;
    r=contaDigito1(v);
    printf("%d\n",r);
    system("pause");
    return 0;
}
