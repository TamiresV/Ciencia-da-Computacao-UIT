#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
    int x[]={0,1,2,3,4,5,6,7,8,9};
    int n=20,i;
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
