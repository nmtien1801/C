#include <stdio.h>
#include <iostream>

#define Max 100

void input(int a[], int &n);
void output(int a[], int n);
int max(int a[],int n);
int min(int a[],int n);
int tim(int a[],int n,int x);
void addtail(int a[],int &n,int x);
void chen(int a[],int &n,int vt,int x);
void xoa(int a[],int &n,int vt);
void sapxep(int a[],int n);

int main() {
  int a[Max],n,x,vt,luachon;
  printf("-----------Menu-----------");
  printf("\n1. nhap mang");
  printf("\n2. xuat mang");
  printf("\n3. tim max");
  printf("\n4. tim min");
  printf("\n5. tim phan tu");
  printf("\n6. them cuoi");
  printf("\n7. chen");
  printf("\n8. xoa phan tu");
  printf("\n9. sap xep tang");
  printf("\n10. thoat");
  printf("\n-----nhap lua chon-----\n");
  do{
    scanf("%d",&luachon);
    switch(luachon){
      case 1: input(a,n);break;
      case 2: output(a,n);break;
      case 3: printf("\nphan tu lon nhat la:%d ",max(a,n));break;
      case 4: printf("\nphan tu nho nhat la:%d ",min(a,n));break;
      case 5:
        printf("\nnhap vao x muon tim: ");scanf("%d",&x);
        if(tim(a,n,x)!=-1) printf("\nVi tri cua phan tu do xuat hien dau tien la %d",tim(a,n,x));
        else printf("\nkhong ton tai"); break;
      case 6:
        printf("\nnhap vao x muon them: ");scanf("%d",&x);
        addtail(a,n,x);break;
      case 7:
        do{
           printf("\nnhap vao vi tri them: ");scanf("%d",&vt);
        }while(vt<0||vt>n);
        printf("\nnhap vao x muon them: ");scanf("%d",&x);
        chen(a,n,vt,x);break;
      case 8:
        do{
           printf("\nnhap vao vi tri muon xoa: ");scanf("%d",&vt);
        }while(vt<0||vt>=n);
        xoa(a,n,vt); break;
      case 9: sapxep(a,n);break;
    }
  }while(luachon!=10);


  return 0;
}





void input(int a[], int &n)
{
  do {
  printf("\nNhap so phan tu cua mang A: "); scanf("%d", &n);
  } while(n < 0 || n > Max);
  printf("\nNhap mang A: \n");
  for(int i = 0; i < n; i++) {
    printf("\na[%d] = ",i);
    scanf("%d",&a[i]);
  }
}
void output(int a[], int n)
{
  printf("phan tu vua nhap la ");
  for(int i = 0; i < n; i++)
  printf("%d ", a[i]);
}
int max(int a[],int n){
  int max=a[0];
  for(int i=1;i<n;i++){
    if(max<a[i]) max=a[i];
  }
  return max;
}
int min(int a[],int n){
  int min=a[0];
  for(int i=1;i<n;i++){
    if(min>a[i]) min=a[i];
  }
  return min;
}
int tim(int a[],int n,int x){
  int i=0;
  while(a[i]!=x && i<n){
    i++;
  }
  if(a[i]==x) return(i);
  else return -1;
}
void addtail(int a[],int &n,int x){
  if(n==Max) printf("\nda day");
  else{
    a[n]=x;
    n++;
  }
}
void chen(int a[],int &n,int vt,int x){
  if(n==Max) printf("day\n");
  else{
    for(int i=n-1;i>=vt;i--){
      a[i+1]=a[i];
    }
    a[vt]=x;
    n++;
  }
}
void xoa(int a[],int &n,int vt){
    for(int i=vt+1;i<n;i++){
      a[i-1]=a[i];
    }
    n--;
}
void sapxep(int a[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]>a[j]){
        int c=a[i];
        a[i]=a[j];
        a[j]=c;
      }
    }
  }
}
