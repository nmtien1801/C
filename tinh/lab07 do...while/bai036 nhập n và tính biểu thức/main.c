#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float tong=0,tich=1;
    do{
    printf("\nnhap n:"); scanf("%d",&n);
    }while(n<0);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            tich*=(2*i-1)/(2.0*i);
            tong+=i*(i+1)*(i+2);
        }
        printf("\ntich s3 = %f",tich);
        printf("\ntong s4 = %f",tong);
    }
    else printf("\ntich s3: khong chia duoc");printf("\ntong s4= 0");
    return 0;
}
