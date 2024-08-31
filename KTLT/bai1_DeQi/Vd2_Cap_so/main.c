#include <stdio.h>
#include <stdlib.h>
double capsocong(int n, int a, int r);
double capsonhan(int n, int a, int q);
int main()
{
    int n,a,r,q;
    do{
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<1);
    printf("\nnhap so hang dau: ");scanf("%d",&a);
    printf("\nnhap cong sai: ");scanf("%d",&r);
    printf("\nnhap cong boi: ");scanf("%d",&q);
    printf("\ncap so cong la: %lf",capsocong(n,a,r));
    printf("\nso hang dau cua cap so cong: ");
    for(int i=1;i<=n;i++){
        if((i-1)%10==0){
            printf("\n");
        }
        printf("%.1lf\t",capsocong(i,a,r));
    }


    printf("\n\ncap so nhan la: %.1lf",capsonhan(n,a,q));
    printf("\nso hang dau cua cap so nhan: ");
    for(int i=1;i<=n;i++){
        if((i-1)%10==0){
            printf("\n");
        }
        printf("%.1lf\t",capsonhan(i,a,q));
    }
    return 0;
}
double capsocong(int n, int a, int r){
    if(n==1)return a;
    return capsocong(n-1,a,r)+r;
}
double capsonhan(int n, int a, int q){
    if(n==1)return a;
    return q*capsonhan(n-1,a,q);
}
