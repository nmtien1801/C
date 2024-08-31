#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(FILE *fp,float a[]);
void Read_file(FILE *fp,float a[]);
float tinhTong(float a[]);
void them(FILE *fp,float a[],int &n);

int main()
{
    FILE *fp;
    float a[100];
    int n;
    input(fp,a);
    them(fp,a,n);

    Read_file(fp,a);
    printf("\ntong binh phuong = %f",tinhTong(a));
    return 0;
}
void input(FILE *fp,float a[]){
    fp=fopen("D:/INPUT.txt","w");
    if(fp==NULL){
        printf("\nfile khong ton tai");
        exit(0);
    }
    printf("\nnhap 10 so thuc: ");
    for(int i=0;i<10;i++){
        scanf("%f",&a[i]);
        fprintf(fp,"%f ",a[i]);
    }

    fclose(fp);
}
void Read_file(FILE *fp,float a[]){
     fp=fopen("D:/INPUT.txt","r");
    if(fp==NULL){
        printf("\nfile khong ton tai");
        exit(0);
    }
    int i=0;
    while(fscanf(fp,"%f",&a[i])!=EOF)
    {
        printf("%f ",a[i]);
        i++;
    }
    fclose(fp);
}
float tinhTong(float a[]){
    float s=0;
    for(int i=0;i<10;i++){
        s+=a[i]*a[i];
    }
    return s;
}
void them(FILE *fp,float a[],int &n){
    fp=fopen("D:/INPUT.txt","a");
    if(fp==NULL){
        printf("\nfile khong ton tai");
        exit(0);
    }
    n=10;
    float x;
    printf("\nnhap gt them vao: ");scanf("%f",&x);
    n++;
    fprintf(fp,"%f",x);
    fclose(fp);
}




