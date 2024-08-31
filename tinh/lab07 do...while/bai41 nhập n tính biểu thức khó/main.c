#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float tich=1;
    do
    {
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<=0);
    for(int i=1;i<=n;i++)
    {
        tich*=(2*i-1)/(2.0*i);
    }
    printf("\ntich= %f",tich);
    return 0;
}
