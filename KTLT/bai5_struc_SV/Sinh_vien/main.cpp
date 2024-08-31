#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define max 100
 using namespace std;

typedef struct sinhvien
{
  char Ho_ten[30], MSSV[10];
  float Diem_TK, Diem_GK, Diem_CK,Diem_TH ,Diem_TB;
}SINHVIEN;

void Doc_1SV(SINHVIEN &a){
  fflush(stdin);
  printf("\nnhap ho ten: "); gets(a.Ho_ten);
  fflush(stdin);
  printf("\nnhap MSSV: ");gets(a.MSSV);
  printf("\nnhap diem thuong ki: ");scanf("%f",&a.Diem_TK);
  printf("\nnhap diem giua ki: ");scanf("%f",&a.Diem_GK);
  printf("\nnhap diem cuoi ki: ");scanf("%f",&a.Diem_CK);
  printf("\nnhap diem thuc hanh: ");scanf("%f",&a.Diem_TH);
}
void Xuat_1SV(SINHVIEN a){
  printf("\n\nho ten SV: %s",a.Ho_ten);
  printf("\nMSSV: %s",a.MSSV);
  printf("\ndiem thuong ki: %f",a.Diem_TK);
  printf("\ndiem giua ki: %f",a.Diem_GK);
  printf("\ndiem cuoi ki: %f",a.Diem_CK);
  printf("\ndiem thuc hanh: %f",a.Diem_TH);
}
void DS_SV(SINHVIEN a[],int &n){
  do{
    printf("\nnhap n sinh vien: ");scanf("%d",&n);
  }while(n<0);
  for(int i=0;i<n;i++){
    printf("\n\nsinh vien thu %d ",i+1);
    Doc_1SV(a[i]);
  }
}
float Tinh_DTB(SINHVIEN a){
    a.Diem_TB=((((2*a.Diem_TK+3*a.Diem_GK+5*a.Diem_CK)/10)*2+a.Diem_TH)/3);
    return a.Diem_TB;
}
void Xuat_DS(SINHVIEN a[],int n){
  printf("\ndanh sach sinh vien moi nhap la: ");
  for(int i=0;i<n;i++){
    Xuat_1SV(a[i]);
    printf("\ndiem trung binh ca nam bang: %.4f",Tinh_DTB(a[i]));
  }
}
void Hien_thi_duoi_TB(SINHVIEN a[],int n){
    printf("\n\nnhung hoc sinh co diem TB < 4 la");
    for(int i=0;i<n;i++){
        if(Tinh_DTB(a[i])<4){
            printf("\nSTT      ho ten       MSSV         DTB");
            printf("\n%d        %s          %s           %.4f",i+1,a[i].Ho_ten,a[i].MSSV,Tinh_DTB(a[i]));
        }
    }
}
void Tim(SINHVIEN a[],int n){
    char sv[7];
    fflush(stdin);
    printf("\nnhap MSSV can tim: ");gets(sv);
    for(int i=0;i<n;i++){
        if(strcmp(sv,a[i].MSSV)==0){
            printf("\nsinh vien can tim:\n ");
            Xuat_1SV(a[i]);
            printf("\nDiem trung binh: %.4f",Tinh_DTB(a[i]));
        }
        else printf("\nkhong tim thay sinh vien nay!!!");
        }
}
void sap_xep(SINHVIEN a[],int n){
    SINHVIEN tam;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].Diem_TB<a[j].Diem_TB){
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
}
void Hien_thi(SINHVIEN a[],int n){
    printf("\n\nDanh sach diem thi KTLT");
    for(int i=0;i<n;i++){
        printf("\nSTT      ho ten       MSSV     TK     GK      CK      TH       DTB        GHI CHU");
        printf("\n%d        %s          %s      %.3f    %.3f    %.3f    %.3f     %.3f",i+1,a[i].Ho_ten,a[i].MSSV,a[i].Diem_TK,a[i].Diem_GK,a[i].Diem_CK,a[i].Diem_TH,Tinh_DTB(a[i]));
        if(a[i].Diem_TB<4)printf("\t Hoc lai");
    }
}

int main()
{
  SINHVIEN a[30];
  int n;
  DS_SV(a,n);
  sap_xep(a,n);
  Xuat_DS(a,n);
  //Hien_thi_duoi_TB(a,n);
    Hien_thi(a,n);

  //Tim(a,n);
  system("pause");
  return 0;
}
