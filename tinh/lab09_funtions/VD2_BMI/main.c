#include <stdio.h>
#include <stdlib.h>

void nhap(int a[],int *n,float *nang,float *cao){
  for(int i=0;i<*n;i++){
    printf("\nnhap vao a[%d]",i);
    do{
        printf("\nnhap can nang: ");scanf("%f",&*nang);
    }while(nang<0);
    do{
        printf("\nnhap chieu cao: ");scanf("%f",&*cao);
    }while(cao<0);
  }
}

float BMI(float nang,float cao){
    float BMI;
    BMI=(nang)/(cao*cao);
    return BMI;
}
void KT(float n){
    if(n<18.5) printf("thieu can");
    else if(n<23) printf("binh thương");
    else if(n<25) printf("thua can");
    else printf("beo phi");
}

void xuat(int a[],int n,float nang, float cao){

  for(int i=0;i<n;i++){
    printf("\n%d\t%.1f\t%.1f\t%.1f\t",i,cao,nang,BMI(nang,cao));
    KT(BMI(nang,cao));
  }
}
int main()
{
    int n,a[100];
    float nang,cao;
    do{
      printf("\nnhap n phan tu: ");scanf("%d",&n);
    }while(n<1);
    nhap(a,&n,&nang,&cao);
    printf("\nTHONG KE BMI CUA CONG TY ABC\n");
    printf("\nSTT\tC.Cao\tC.Nang\tBMI\tTinh Trang\n");
    xuat(a,n,nang,cao);

    return 0;
}
