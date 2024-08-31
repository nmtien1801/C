#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float x,tong=1;
    do
    {
        printf("\nnhap n: ");scanf("%d",&n);
        printf("\nnhap x: ");scanf("%f",&x);
    }while(n<0);
    float gt=1;
    for(int i=1;i<=n;i++)
    {
        gt*=i;
        tong+=pow(x,i)/(1.0*gt);
    }
    printf("\ntong= %f",tong);
    return 0;
}
