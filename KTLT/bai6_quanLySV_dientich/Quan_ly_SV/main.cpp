#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct Sinhvien{
   char holot[30],ten[30];
   char ngaysinh[8];
   char noisinh[40];
   float D_win=0,D_word=0,D_excel=0;
   float Tong_diem;
   char X_loai[20];
}SV;
void Nhap_1SV(SV &a){
    fflush(stdin);
    printf("\nnhap ho lot: ");gets(a.holot);
    fflush(stdin);
    printf("\nnhap ten: ");gets(a.ten);
    fflush(stdin);
    printf("\nnhap ngay sinh: ");gets(a.ngaysinh);
    fflush(stdin);
    printf("\nnhap noi sinh: ");gets(a.noisinh);
}
void Nhap_DS_SV(SV a[],int &n){
    for(int i=0;i<n;i++){
        printf("\nnhap sinh vien thu %d",i+1);
        Nhap_1SV(a[i]);
        printf("\n");
    }
}
void Nhap_diem_1SV(SV &a){
    printf("\nnhap diem Windows: ");scanf("%f",&a.D_win);
    printf("\nnhap diem Word: ");scanf("%f",&a.D_word);
    printf("\nnhap diem Excel: ");scanf("%f",&a.D_excel);
    a.Tong_diem=a.D_win+a.D_word+a.D_excel;

}
void Nhap_diem_DS(SV a[],int &n){
    for(int i=0;i<n;i++){
        printf("\n\nnhap diem sinh vien thu %d",i+1);
        Nhap_diem_1SV(a[i]);
        printf("\n");
    }
}
void xep_loai(SV a){
    if(a.Tong_diem>=24) printf("gioi");
    else if(a.Tong_diem>=18) printf("kha");
    else if(a.Tong_diem>=15) printf("trung binh");
    else printf("kem");
}
void DS_Sinhvien(SV a[],int n){
    printf("\nSTT   HO VA TEN   NGAY SINH   NOI SINH    GHI CHU");
    for(int i=0;i<n;i++){
        printf("\n%d    %s %s           %s      %s",i+1,a[i].holot,a[i].ten,a[i].ngaysinh,a[i].noisinh);
    }
}
void DS_xeploai(SV a[],int n){
    printf("\nSTT   HO VA TEN       DIEM TONG    XEP LOAI");
    for(int i=0;i<n;i++){
        printf("\n%d    %s %s           %.1f      ",i+1,a[i].holot,a[i].ten,a[i].Tong_diem);
        xep_loai(a[i]);
    }
}
int main()
{
    SV a[50];
    int n;
    do{
      printf("\nnhap n sinh vien: ");scanf("%d",&n);
    }while(n<0);
    Nhap_DS_SV(a,n);
    DS_Sinhvien(a,n);
    Nhap_diem_DS(a,n);

    DS_xeploai(a,n);
    return 0;
}
