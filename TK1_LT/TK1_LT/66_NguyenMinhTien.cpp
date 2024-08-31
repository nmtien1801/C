#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
typedef struct medicine{
    char ID[8],name[15],HSD[11];
    long donGia;
    int SL;             //max 100 loai
};
void nhap1(medicine &a);
void xuat1(medicine &a);
void nhapDS(medicine a[],int &n);
void xuatDS(medicine a[],int n);
long tinhtien(medicine a);
int loc(medicine a);
void hienThi(medicine a[],int n);

void ghiFile(char *file,medicine a[],int &n);
void docFile(char *file,medicine a[],int &n);
void them(char *file,medicine a[],int &n);
void sua(char *file);
int main()
{
    medicine a[100];
    int n;
    char file[100];
    nhapDS(a,n);
    printf("\nnhap file can ghi: ");fflush(stdin);
    gets(file);
    ghiFile(file,a,n);
//
//    printf("\nnhap file can them: ");fflush(stdin);
//    gets(file);
//    them(file,a,n);

    printf("\nnhap file can doc: ");fflush(stdin);
    gets(file);
    docFile(file,a,n);
    xuatDS(a,n);

//    printf("\nnhap file can sua: ");fflush(stdin);
//    gets(file);
    //sua(file);


    //hienThi(a,n);
    return 0;
}
void nhap1(medicine &a){
    printf("\nnhap ID: ");fflush(stdin);
    gets(a.ID);
    printf("\nnhap ten thuoc: ");fflush(stdin);
    gets(a.name);
    printf("\nnhap don gia: ");scanf("%ld",&a.donGia);
    printf("\nnhap so luong: ");scanf("%d",&a.SL);
    printf("\nnhap ngay het han: ");fflush(stdin);
    gets(a.HSD);
}
void xuat1(medicine &a){
    printf("\nID: ");puts(a.ID);
    printf("\nten thuoc: ");puts(a.name);
    printf("\ndon gia: %ld",a.donGia);
    printf("\nso luong: %d",a.SL);
    printf("\nngay het han: ");puts(a.HSD);
}
void nhapDS(medicine a[],int &n){
    do{
        printf("\nnhap so luong DS thuoc: ");scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        nhap1(a[i]);
    }
}
void xuatDS(medicine a[],int n){
    for(int i=0;i<n;i++){
        xuat1(a[i]);
    }
}
int loc(medicine a){
    char *p=strrev(a.HSD);
    for(int i=0;i<strlen(p);i++){
       if(strcmp(p,"3202/1/01")>0){
        return 1;
       }
    }
    return 0;
}
long tinhtien(medicine a){
    long T;
    if(loc(a)==1){
        T=a.donGia*a.SL-((a.donGia*a.SL)*0.1);
    }else
        T=a.donGia*a.SL;
    return T;
}


void hienThi(medicine a[],int n){
    printf("\nSTT   Ma Hang   TEN THUOC   HSD    DON GIA    SO LUONG   THANH TIEN");
    for(int i=0;i<n;i++){
       printf("\n%d  %s   %s    %s     %ld    %d    %ld",i+1,a[i].ID,a[i].name,a[i].HSD,a[i].donGia,a[i].SL,tinhtien(a[i]));
    }
}
void ghiFile(char *file,medicine a[],int &n){
    FILE *fp;
    fp=fopen(file,"wb");
    if(fp==NULL){
        printf("\nkhong tim thay");
        exit(0);
    }

    fwrite(a,100,n,fp);
    fclose(fp);
}
void docFile(char *file,medicine a[],int &n){
     FILE *fp;
    fp=fopen(file,"rb");
    if(fp==NULL){
        printf("\nkhong tim thay");
        exit(0);
    }


    fread(a,100,n,fp);

    fclose(fp);
}
void them(char *file,medicine a[],int &n){
    FILE *fp;
    medicine add;

    fp=fopen(file,"ab");
    if(fp==NULL){
        printf("\nkhong tim thay");
        exit(0);
    }
    fseek(fp,0,SEEK_END);
    n=ftell(fp)/sizeof(medicine);
    rewind(fp);

    printf("\nnhap ID: ");fflush(stdin);
    gets(add.ID);
    printf("\nnhap ten thuoc: ");fflush(stdin);
    gets(add.name);
    printf("\nnhap don gia: ");scanf("%ld",&add.donGia);
    printf("\nnhap so luong: ");scanf("%d",&add.SL);
    printf("\nnhap ngay het han: ");fflush(stdin);
    gets(add.HSD);
    n++;

    fwrite(&add,sizeof(medicine),1,fp);
    fclose(fp);
}
void sua(char *file){
    medicine a;
    int n,i;
    FILE *fp;
    fp=fopen(file,"r+b");
    if(fp==NULL){
        printf("\nkhong tim thay");
        exit(0);
    }
    fseek(fp,0,SEEK_END);
	n = ftell(fp)/sizeof(medicine);
	rewind(fp);
	while(1)
	{
		system("cls");
		printf("\n Sua thong tin nguoi thu : ");
		scanf("%d",&i);
		if(i<=0)return;
		if(i>0 && i<=n)
		{
			fseek(fp,(i-1)*sizeof(medicine),SEEK_SET);// Con tro chi ve vi tri cuoi tep
			printf("\n Thong tin hien tai:");
			fread(&a ,sizeof(medicine),1,fp);
			printf("\nID: ");puts(a.ID);
            printf("\nten thuoc: ");puts(a.name);
            printf("\ndon gia: %ld",a.donGia);
            printf("\nso luong: %d",a.SL);
            printf("\nngay het han: ");puts(a.HSD);

			printf("\n thong tin can sua:");
			printf("\nnhap ID: ");fflush(stdin);
            gets(a.ID);
            printf("\nnhap ten thuoc: ");fflush(stdin);
            gets(a.name);
            printf("\nnhap don gia: ");scanf("%ld",&a.donGia);
            printf("\nnhap so luong: ");scanf("%d",&a.SL);
            printf("\nnhap ngay het han: ");fflush(stdin);
            gets(a.HSD);

			printf("\n Co luu lai thong tin khong? C/K:");
			fflush(stdin);
			if(toupper(getchar())=='C')
			{
				fseek(fp,(i-1)*sizeof(medicine),SEEK_SET);
				fwrite(&a,sizeof(medicine),1,fp);//ghi vao file
			}

		}

	}
    fclose(fp);
}
//void xoa(char *file,medicine a[],int &n){
//    FILE *fp;
//    medicine add;
//
//    fp=fopen(file,"r+");
//    if(fp==NULL){
//        printf("\nkhong tim thay");
//        exit(0);
//    }
//    fseek(fp,0,SEEK_END);
//    n=ftell(fp)/sizeof(medicine);
//    rewind(fp);
//	while(1)
//	{
//		printf("\n xoa thong tin nguoi thu : ");
//		scanf("%d",&i);
//		if(i<=0)return;
//		if(i>0 && i<=n)
//		{
//
//			n--;
//			printf("\n Co luu lai thong tin khong? C/K:");
//			fflush(stdin);
//			if(toupper(getchar())=='C')
//			{
//				fseek(fp,(i-1)*sizeof(medicine),SEEK_SET);
//				fwrite(&a,sizeof(medicine),1,fp);//ghi vao file
//			}
//
//		}
//
//	}
//
//
//
//    fclose(fp);
//}


