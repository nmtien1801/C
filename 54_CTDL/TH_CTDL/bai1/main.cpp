#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[256];
    char meaning[512];
}Word;
void menu();
void hoanVi(Word &a, Word &b);
void quickSort(Word a[], int l, int r);
int binarySearch(Word a[], int l, int r, char x[]);
void nhapTu(Word a[], int &n);
void xuat(Word a[],int n);
void hienThi(Word a);
void suaChua(char *tep, Word a[], int n);
void taoMoi(char *tep,Word a[], int n);
void docTep(char *tep, Word a[],int &n);
void ghiDeFile(char *tep,Word a[],int n);
void xoa(char *tep,Word a[],int &n);

int main()
{
    Word a[100];
    int chon,n;
    char f[100];char x[100];
    do{
        menu();
        printf("\nnhap lua chon: ");
        scanf("%d",&chon);
        switch(chon){
        case 1:
            printf("\nnhap ten file can ghi: ");
            fflush(stdin);gets(f);
            taoMoi(f,a,n);
            break;
        case 2:
            printf("\nnhap ten file can doc: ");
            fflush(stdin);gets(f);
            docTep(f,a,n);
            xuat(a,n);
            break;
        case 3:{
            printf("\nnhap tu can tra: ");
            fflush(stdin);gets(x);
            int vt=binarySearch(a,0,n-1,x);
            if(vt==-1) printf("\nkhong tim thay");
            else{
                printf("\ntu o vi tri thu: %d",vt);
                hienThi(a[vt]);
            }
            }break;
        case 4:
            printf("\nnhap ten file can sua: ");
            fflush(stdin);gets(f);
            suaChua(f,a,n);
            break;
        case 5:
            printf("\nnhap ten file can xoa: ");
            fflush(stdin);gets(f);
            //quickSort(a,0,n-1);
            xoa(f,a,n);
            break;
        }
    }while(chon<6);
    return 0;
}
void menu(){
    printf("\n========================================\n");
    printf("1. tao bo tu dien\n");
    printf("2. hien thi bo tu dien\n");
    printf("3. tra tu\n");
    printf("4. sua chua\n");
    printf("5. xoa tu\n");
    printf("6. thoat");
    printf("\n========================================\n");
}
void hoanVi(Word &a, Word &b){
    Word c= a;
    a= b;
    b= c;
}
void quickSort(Word a[], int l, int r){
    int i,j;
    char mid[100];
    strcpy(mid ,a[(l+r)/2].name);
    i= l; j= r;
    do{
        while(strcmp(a[i].name,mid) < 0) i++;
        while(strcmp(a[j].name,mid) > 0) j++;
        if(i<=j) {
            hoanVi(a[i],a[j]);
            i++;
            j--;
        }
    }while(i < j);
    if(l<j) quickSort(a,l,j);
    if(i<r) quickSort(a,i,r);
}
int binarySearch(Word a[], int l, int r,char x[]){
    int mid = (l+r)/2;
    if(l>r) return -1;
    else{
        if(strcmp(a[mid].name,x) == 0) return mid;
        else if(strcmp(a[mid].name,x) > 0) binarySearch(a,l,mid-1,x);
        else if(strcmp(a[mid].name,x) < 0) binarySearch(a,mid+1,r,x);
    }
}
void nhapTu(Word a[], int &n){
    printf("\ntu dien co bao nhieu tu: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nnhap tu tieng anh: ");
        fflush(stdin);gets(a[i].name);
        printf("\nnhap nghia tieng viet: ");
        fflush(stdin);gets(a[i].meaning);
    }
    quickSort(a,0,n-1);
}
void xuat(Word a[],int n){
    printf("\n======tu dien=====");
    for(int i=0;i<n;i++){
        hienThi(a[i]);
    }
}
void hienThi(Word a){
    printf("\ntu khoa: %-21s",a.name);
    printf("\nnghia cua tu: %-11s",a.meaning);
}
void taoMoi(char *tep,Word a[], int n){
    FILE *f;
    f= fopen(tep,"wb");
    if(f == NULL){
        printf("khong the mo duoc file\n");
        exit(1);
    }
    nhapTu(a,n);

    fwrite(a,sizeof(Word),n,f);
    fclose(f);
}
void docTep(char *tep, Word a[],int &n){
    FILE *f;
    f= fopen(tep,"rb");
    if(f == NULL){
        printf("khong the mo duoc file\n");
        exit(1);
    }
    fseek(f,0,SEEK_END);
    n=ftell(f)/sizeof(Word);
    rewind(f);

    fread(a,sizeof(Word),n,f);
    fclose(f);
}
void suaChua(char *tep, Word a[], int n){
    char x[100];
    int i=0;
   FILE *f;
    f= fopen(tep,"r+b");
    if(f == NULL){
        printf("khong the mo duoc file\n");
        exit(1);
    }
    docTep(tep,a,n);
    printf("\nnhap tu can sua: ");
    fflush(stdin);
    gets(x);
    while(strcmp(a[i].name,x) != 0){
        i++;
    }
    printf("\nvi tri tu can sua la: %d",i);
    fseek(f,i*sizeof(Word),SEEK_SET);
    printf("\nthong tin hienn tai: \n");
    hienThi(a[i]);

    printf("\nsua thong tin: ");
    printf("\nnhap tu tieng anh: ");
    scanf("%s",a[i].name);
    printf("\nnhap nghia tieng viet: ");
    scanf("%s",a[i].meaning);

    fwrite(&a[i],sizeof(Word),1,f);
    fclose(f);
}
void ghiDeFile(char *tep,Word a[],int n){
    FILE *f;
    f= fopen(tep,"wb");
    if(f == NULL){
        printf("khong the mo duoc file\n");
        exit(1);
    }

    fwrite(a,sizeof(Word),n,f);
    fclose(f);
}
void xoa(char *tep,Word a[],int &n){
    FILE *f;
    int vt = 0;
    char x[100];
    f= fopen(tep,"r+b");
    if(f == NULL){
        printf("khong the mo duoc file\n");
        exit(1);
    }
    docTep(tep,a,n);

    printf("\nnhap tu can xoa: ");
    fflush(stdin);gets(x);

    while(strcmp(a[vt].name,x) != 0){
        vt++;
    }

    fseek(f,0,SEEK_END);
    n=ftell(f)/sizeof(Word);
    rewind(f);

    for(int i= vt+1;i<n;i++){
        a[i-1]=a[i];
    }
    n--;
    ghiDeFile(tep,a,n);
    fclose(f);
}
