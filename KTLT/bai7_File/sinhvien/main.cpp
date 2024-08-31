#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sinhvien{
    char ho[10],ten[10];
    float toan,tin;
};
void nhap1(sinhvien &a);
void nhapds(sinhvien a[],int &n);
void xuat1(sinhvien a);
void xuatds(sinhvien a[],int n);
void ghiFile(char name[],sinhvien a[],int n);
void docFile(char name[],sinhvien a[],int &n);
void sua(char name[],sinhvien a[],int &n);
int main(){
    char name[100];
    sinhvien a[100];
    int n;
//    nhapds(a,n);
//    printf("\nnhap file can ghi: ");scanf("%s",name);
//    ghiFile(name,a,n);

    printf("\nnhap file can doc: ");scanf("%s",name);
    docFile(name,a,n);
    xuatds(a,n);

    sua(name,a,n);

    return 0;
}
void nhap1(sinhvien &a){
    printf("\nnhap ho lot: ");
    fflush(stdin);
    gets(a.ho);
    if(strlen(a.ho)==0){
        return;
    }
    printf("\nnhap ten: ");
    fflush(stdin);
    gets(a.ten);
    do{
        printf("\nnhap D.toan: ");scanf("%f",&a.toan);
    }while(a.toan<0);
    do{
        printf("\nnhap D.tin: ");scanf("%f",&a.tin);
    }while(a.tin<0);
}
void nhapds(sinhvien a[],int &n){
    n=0;
    while(1){
        nhap1(a[n]);
        if(strlen(a[n].ho)==0){
            return;
        }
        n++;
    }
}
void xuat1(sinhvien a){
    printf("\nho ten: %s %s",a.ho,a.ten);
    printf("\ndiem toan: %.2f",a.toan);
    printf("\ndiem tin: %f\n",a.tin);
}
void xuatds(sinhvien a[],int n){
    for(int i=0;i<n;i++){
        xuat1(a[i]);
    }
}
void ghiFile(char name[],sinhvien a[],int n){
    FILE *fp;
    fp=fopen(name,"wb");

    fwrite(a,sizeof(sinhvien),n,fp);

    fclose(fp);
}
void docFile(char name[],sinhvien a[],int &n){
    FILE *fp;
    fp=fopen(name,"rb");
    fseek(fp,0,SEEK_END);
    n=ftell(fp)/sizeof(sinhvien);
    rewind(fp);
    fread(a,sizeof(sinhvien),n,fp);

    fclose(fp);
}
void sua(char name[],sinhvien a[],int &n){
    FILE *fp;
    fp=fopen(name,"r+b");
    fseek(fp,0,SEEK_END);
    n=ftell(fp)/sizeof(sinhvien);
    rewind(fp);
    int i;
    while(1){
        printf("\nnhap vi tri can thay doi - press 0 de dung!");scanf("%d",&i);
        if(i<=0||i>n)return;
        fseek(fp,(i)*sizeof(sinhvien),SEEK_SET);
        fread(&a[i],sizeof(sinhvien),1,fp);
        xuat1(a[i]);
        printf("\nthong tin cap nhat: ");
        printf("\nnhap ho lot: ");
        fflush(stdin);
        gets(a[i].ho);
        if(strlen(a[i].ho)==0){
            return;
        }
        printf("\nnhap ten: ");
        fflush(stdin);
        gets(a[i].ten);
        do{
            printf("\nnhap D.toan: ");scanf("%f",&a[i].toan);
        }while(a[i].toan<0);
        do{
            printf("\nnhap D.tin: ");scanf("%f",&a[i].tin);
        }while(a[i].tin<0);
        fseek(fp,(i)*sizeof(sinhvien),SEEK_SET);
        fwrite(&a[i],sizeof(sinhvien),1,fp);
    }

    fclose(fp);
}
