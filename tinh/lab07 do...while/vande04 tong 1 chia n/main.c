#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1;
    float e,tong=0;
    printf("\nnhap e: ");scanf("%f",&e);

    while(tong<=e)
    {
        tong+=1.0/n++;
    }
    printf("\ntong la %f",tong);
    return 0;
}
