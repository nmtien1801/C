#include <stdio.h>

float lai_kep(float y, int n,float x);

int main()
{
    float x,y;
    int n;
    do{
        printf("\nnhap tien von: ");scanf("%f",&y);
    }while(n<0);
    do{
        printf("\nnhap nam gui: ");scanf("%d",&n);
    }while(n<0);
    do{
        printf("\nnhap lai theo nam: ");scanf("%f",&x);
    }while(x<=0);
    x=x/100;
    printf("\nso tien thu duoc la: %f",lai_kep(y,n,x));
    return 0;
}
float lai_kep(float y, int n,float x){
    if(n==0)return y;
    return (x+1)*lai_kep(y,n-1,x);
}

