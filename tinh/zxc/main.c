#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nhim{
    char name[10];
    int gia;
};
void nhap1(nhim &a){
    printf("\nnhap ten: ");fflush(stdin);
    gets(a.name);
    printf("\nnhap don gia");
    scanf("%d",&a.gia);
}
void xuat1(nhim a){
    printf("\nten: ")puts(a.name);
    printf("\ndon gia %d",a.gia);
}
void nhapDs(nhim a[],int &n){
    printf("\nnhap n: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        nhap1(a[i]);
    }
}
void xuatDs(nhim a[],int n){
    int M=a[0].gia;
    for(int i=1;i<n;i++){
        if(a[i].gia>M){
            M=a[i].gia;
            xuat1(a[i]);
        }
    }
}
int main(){
    nhim a[100];
    int n;
    nhapDs(a,n);
    xuatDs(a,n);
    return 0;
}
