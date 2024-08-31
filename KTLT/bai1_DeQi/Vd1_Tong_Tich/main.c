#include <stdio.h>
#include <stdlib.h>
long tong(int n);
long tich(int n);
double luythua(float a, int n);
int main()
{
    int n;
    float a;
    do{
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);
    printf("\ntong tu 1 den %d la: S= %ld",n,tong(n));

    do{
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<1);
    printf("\ntich tu 1 den %d la: P= %ld",n,tich(n));
    printf("\nnhap co so va so mu: ");scanf("%f%d",&a,&n);
    printf("\n%.1f mu %d la: A= %.2lf",a,n,luythua(a,n));
    return 0;
}
long tong(int n){
    if(n==0)return 0;
    return tong(n-1)+ n;
}
long tich(int n){
    if(n==1)return 1;
    return tich(n-1)*n;
}
double luythua(float a, int n){
    if(n==0)return 1;
    return luythua(a,n-1)*a;
}
