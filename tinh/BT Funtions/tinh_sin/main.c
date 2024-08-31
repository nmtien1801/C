#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gt(int n)
{
    int gt=1;
    for(int i=1;i<=n;i++)
    {
        gt*=i;
    }
    return gt;
}

void tinh_sin(int x)
{
    float sinx=x,e;
    for(int i=1;fabs(pow(-1,i)*(pow(x,2*i+1))/(gt(2*i+1)))<e;i++)
    {
        sinx+=pow(-1,i)*(pow(x,2*i+1))/(gt(2*i+1));
    }
    printf("%f",sinx);
}
int main()
{
    float x,i=0;
    float e=0.00001;
    printf("\nnhap x: ");scanf("%f",&x);
    x=x*3.14/180;
    tinh_sin(x);

    return 0;
}





