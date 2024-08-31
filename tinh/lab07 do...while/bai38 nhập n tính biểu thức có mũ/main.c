#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,tong=0;
    do
    {
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<=n;i++)
    {
        tong+=pow(2*i+1,2);
    }
    printf("\ntong= %d",tong);
    return 0;
}
