#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nhanvien{
    char hoten[50];
    int tuoi;
    float luong;
};
void nhap1(nhanvien &a);
void nhapds(nhanvien a[],int &n);
void xuat1(nhanvien a);
void xuatds(nhanvien a[],int n);
void ghiFile(char name[],nhanvien a[],int n);
void docFile(char name[],nhanvien a[],int &n);
void them(char name[],nhanvien a[],int &n);
int main(){
    char name[100];
    nhanvien a[100];
    int n;
    nhapds(a,n);
    printf("\nnhap file can ghi: ");scanf("%s",name);
    ghiFile(name,a,n);

//    printf("\nnhap file can doc: ");scanf("%s",name);
//    docFile(name,a,n);
//    xuatds(a,n);

    printf("\nthem vao 1 NV: ");
    them(name,a,n);
    docFile(name,a,n);
    xuatds(a,n);
    return 0;
}
void nhap1(nhanvien &a){
    printf("\nnhap ho ten: ");
    fflush(stdin);
    gets(a.hoten);
    if(strlen(a.hoten)==0){
            return;
        }
    do{
        printf("\nnhap tuoi: ");scanf("%d",&a.tuoi);
    }while(a.tuoi<=0);
    do{
        printf("\nnhap luong: ");scanf("%f",&a.luong);
    }while(a.luong<=0);
}
void nhapds(nhanvien a[],int &n){
    n=0;
    while(1){
        nhap1(a[n]);
        if(strlen(a[n].hoten)==0){
            return;
        }
        n++;
    }
}
void xuat1(nhanvien a){
    printf("\nho ten: %s",a.hoten);
    printf("\ntuoi: %d",a.tuoi);
    printf("\nluong: %f\n",a.luong);
}
void xuatds(nhanvien a[],int n){
    for(int i=0;i<n;i++){
        xuat1(a[i]);
    }
}
void ghiFile(char name[],nhanvien a[],int n){
    FILE *fp;
    fp=fopen(name,"wb");

    fwrite(a,sizeof(nhanvien),n,fp);

    fclose(fp);
}
void docFile(char name[],nhanvien a[],int &n){
    FILE *fp;
    fp=fopen(name,"rb");
    fseek(fp,0,SEEK_END);
    n=ftell(fp)/sizeof(nhanvien);
    rewind(fp);
    fread(a,sizeof(nhanvien),n,fp);

    fclose(fp);
}
void them(char name[],nhanvien a[],int &n){
    FILE *fp;
    nhanvien nv;
    fp=fopen(name,"ab");
    fseek(fp,0,SEEK_END);
    n=ftell(fp)/sizeof(nhanvien);
    rewind(fp);
    while(1){
        nhap1(nv);
        if(strlen(nv.hoten)==0){
            return;
        }
        n++;
        fwrite(&nv,sizeof(nhanvien),1,fp);
    }
    fclose(fp);
}
