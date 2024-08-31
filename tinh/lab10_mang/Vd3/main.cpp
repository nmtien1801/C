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
  int a[Max],n;
  input(a,n);
  printf("\n\t Mang A vua nhap: ");
  output(a,n);

  printf("\nmax la: %d",max(a,n));
  printf("\nmin la: %d",min(a,n));

  int x;
  printf("\nnhap x: ");scanf("%d",&x);
  printf("\n%d",tim(a,n,x));

  addtail(a,n,x);
  output(a,n)

    do{
        printf("\nnhap vi tri: ");scanf("%d",&vt);
    }while(vt<0||vt>n);
  chen(a,n,vt,x);
  output(a,n);

    do{
  printf("\nnhap vi tri: ");scanf("%d",&vt);
  }while(vt<0||vt>=n);
  xoa(a,n,vt);
  output(a,n);


  printf("\nMang A vua sapxep: ");
  sapxep(a,n);
  output(a,n);

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
  for(int i = 0; i < n; i++)
  printf(" %d \t", a[i]);
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
