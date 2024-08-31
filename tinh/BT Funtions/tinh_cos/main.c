#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14
int gt(int n);
void tinh_cos(float x);
int main()
{
    float e,x;

    printf("\nnhap e: ");scanf("%f",&e);
    printf("\nnhap x: ");scanf("%f",&x);
    x=x*Pi/180;
    tinh_cos(x);


    return 0;
}
int gt(int n)
{
    int gt=1;
    for(int i=1;i<=n;i++)
    {
        gt*=i;
    }
    return gt;
}
void tinh_cos(float x)
{
    float cosx=1,e;

    for(int i=1;fabs(pow((-1),i)*(pow(x,2*i)/(gt(2*i))))<e;i++)
    {
        cosx+=pow((-1),i)*(pow(x,2*i)/(gt(2*i)));
    }
    printf("%.3f",cosx);
}


