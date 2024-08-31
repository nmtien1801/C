#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float tong=0;
    do
    {
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<=n;i++)
    {
        tong+=pow(-1.0,i)/pow(2*i+1,2);
    }
    printf("\ntong= %f",tong);
    return 0;
}
