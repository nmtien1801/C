#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                            // Đọc, ghi , chỉnh sửa, xoá , thêm File

typedef struct Hocsinh{
    char id[10],name[30];
    int tuoi;
};
void nhap1(Hocsinh &a);
void xuat1(Hocsinh a);
void nhapDs(Hocsinh a[],int &n);
void xuatDs(Hocsinh a[],int n);
void GhiFile(char file[],Hocsinh a[],int &n);
void DocFile(char file[],Hocsinh a[],int &n);
void suaDS(char file[],Hocsinh a[],int n);
void xoaDS(char file[],Hocsinh a[],int &n);
void themDS(char file[],Hocsinh a[],int &n);
int main()
{
    Hocsinh a[100];
    int n;
    char file[100];
    nhapDs(a,n);
    printf("\nnhap ten file can ghi: ");fflush(stdin);
    gets(file);
    GhiFile(file,a,n);

//    printf("\nnhap ten file can doc: ");fflush(stdin);
//    gets(file);
//    DocFile(file,a,n);
//    xuatDs(a,n);

//    printf("\nnhap ten file can sua: ");fflush(stdin);
//    gets(file);
//    suaDS(file,a,n);
//    xuatDs(a,n);

//    printf("\nnhap ten file can xoa: ");fflush(stdin);
//    gets(file);
//    xoaDS(file,a,n);
//    xuatDs(a,n);

    printf("\nnhap ten file can them: ");fflush(stdin);
    gets(file);
    themDS(file,a,n);
    xuatDs(a,n);
    return 0;
}
void nhap1(Hocsinh &a){
    printf("\nnhap ID: ");fflush(stdin);
    gets(a.id);
    printf("\nnhap ten hoc sinh: ");fflush(stdin);
    gets(a.name);
    printf("\nnhap tuoi hoc sinh: ");scanf("%d",&a.tuoi);
}
void xuat1(Hocsinh a){
    printf("\n ID: ");puts(a.id);
    printf("\n ten hoc sinh: ");puts(a.name);
    printf("\n tuoi hoc sinh: %d",a.tuoi);
}
void nhapDs(Hocsinh a[],int &n){
    printf("\nnhap n: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        nhap1(a[i]);
    }
}
void xuatDs(Hocsinh a[],int n){
    printf("\n-------xuat danh sach--------\n ");
    for(int i=0;i<n;i++){
        xuat1(a[i]);
    }
}
void GhiFile(char file[],Hocsinh a[],int &n){
    FILE *fp;
    fp=fopen(file,"wb");
    if(fp==NULL){
        exit(0);
    }
    fwrite(a,sizeof(Hocsinh),n,fp);

    fclose(fp);
}
void DocFile(char file[],Hocsinh a[],int &n){
    FILE *fp;
    fp=fopen(file,"rb");
    if(fp==NULL){
        exit(0);
    }
    fseek(fp,0,SEEK_END);
    n=ftell(fp)/sizeof(Hocsinh);
    rewind(fp);

    fread(a,sizeof(Hocsinh),n,fp);

    fclose(fp);
}
void suaDS(char file[],Hocsinh a[],int n){
    FILE *fp;
    fp=fopen(file,"r+b");
    if(fp==NULL){
        exit(0);
    }
    DocFile(file,a,n);
    xuatDs(a,n);
    int vt;
    printf("\nnhap vao vi tri can sua: ");scanf("%d",&vt);
    for(int i=0;i<n;i++){
        if(i==vt){
            nhap1(a[i]);
        }
    }
    fwrite(a,sizeof(Hocsinh),n,fp);

    fclose(fp);
}
void xoaDS(char file[],Hocsinh a[],int &n){
    FILE *fp;
    fp=fopen(file,"r+b");
    if(fp==NULL){
        exit(0);
    }
    DocFile(file,a,n);
    xuatDs(a,n);
    int vt;
    printf("\nnhap vao vi tri can xoa: ");scanf("%d",&vt);
    for(int i=vt+1;i<n;i++){
        a[i-1]=a[i];
    }
    n--;
    fwrite(a,sizeof(Hocsinh),n,fp);

    fclose(fp);
}
void themDS(char file[],Hocsinh a[],int &n){
    FILE *fp;
    fp=fopen(file,"r+b");
    if(fp==NULL){
        exit(0);
    }
    DocFile(file,a,n);
    printf("\nthem phan tu vao cuoi file: ");
    n++;
    nhap1(a[n-1]);
    fwrite(a,sizeof(Hocsinh),n,fp);

    fclose(fp);
}

